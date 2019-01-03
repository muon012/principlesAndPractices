// Program for detecting repeated words

#include<iostream>
#include<string>
using namespace std;

int main(){

    string previous{" "};
    string current;
    int number_of_words{};
    cout << "Exit program by end-of-input character 'ctrl' + 'C' " << endl;
    while(cin >> current){
        number_of_words++;
        if(previous == current){
            cout << "Word number: " << number_of_words << " repeated: " << current << endl;
        }
        previous = current;
    }


    return 0;
}