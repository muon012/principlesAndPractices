// Write a program that checks if a sentence adheres to the Grammar on page 193.
// It should mark as wrong sentences that do not have periods or "no" whitespace around it.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> nouns{"birds", "fish", "dogs", "squirrels", "pirates"};
vector<string> verbs{"run", "jump", "eat", "dance", "sleep"};
vector<string> conjunctions{"and", "but", "or"};

void display_vector(const vector<string> &word_list)
{
    for (size_t word = 0; word < word_list.size(); ++word)
    {
        cout << word_list[word];
        if (word == word_list.size() - 1)
        {
            cout << '.';
            break;
        }
        cout << ", ";
    }
}

void display_list(string part_of_speech, const vector<string> &word_list)
{
    cout << part_of_speech << ": " << endl;
    cout << '\t';
    display_vector(word_list);
    cout << endl;
    cout << endl;
}

vector<string> single_words(string sentence)
{
    vector<string> word_array;
    string result_word; // Default is empty string.

    cout << sentence << endl;

    for (size_t character = 0; character < sentence.size(); ++character)
    {
        if (sentence[character] == ' ' && result_word.size() != 0)
        {
            word_array.push_back(result_word);
            result_word = "";
        }
        else
            result_word += sentence[character];
    }
    word_array.push_back(result_word); // For the last character in the string.
    
    return word_array;
}

bool try_again(void)
{
    char again;
    cout << "Try another sentence?: ";
    cin >> again;
    cin.ignore(999, '\n');

    return (again == 'y') ? true : false;    
}

bool is_last_period(const vector<string> &word_array)
{
    return (word_array.back() == ".");
}

bool isNounsVerbs(const vector<string> &word_array, const vector<string> &grammar_list)
{
    size_t last_element_index = word_array.size() - 1;
    bool is_nouns_verbs = false;

    if (!is_last_period(word_array))
        return is_nouns_verbs;
    
    for (size_t index = 2; index < word_array.size(); index += 3)
    {
        if (count(grammar_list.begin(), grammar_list.end(), word_array[index]) != 0)
        {
             is_nouns_verbs = true;
        }
        else
        {
            is_nouns_verbs = false;
            break;
        }
    }
    return is_nouns_verbs;
}

void check_sentence(const vector<string> &grammar_list_3)
{
    string sentence;
    int word;
    vector<string> word_array;

    do
    {
        cout << "Enter a sentence: ";
        getline(cin, sentence);
        word_array = single_words(sentence);
        if (is_last_period(word_array))
            cout << "Good sentence!" << endl;
        else
            cout << "BAD" << endl;

    } while (try_again());
}
int main(void)
{
    cout << "This program checks if a sentence is correct." << endl;
    cout << endl;

    display_list("Nouns", nouns);
    display_list("Verbs", verbs);
    display_list("Conjunctions", conjunctions);
    check_sentence(conjunctions);

    return 0;
}