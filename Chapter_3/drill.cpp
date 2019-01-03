// Modify the program so it writes out the age in months;

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout << "Enter name of this letter's author: ";
    string author_name{"??"};
    cin >> author_name;
    cout << "Enter the name of the person you want to write to: ";
    string first_name{"??"};

    cin >> first_name;
    cout << "Dear: " << first_name << "," << endl;
    cout << "How are you? I missed you."
         << "I have been wanting to write you for so long." << endl;
    string friend_name{"??"};
    cout << "Enter another friend's name: ";
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?" << endl;
    char friend_sex{'0'};
    cout << "Enter 'm' if your friend is male or 'f' if it's female: ";
    cin >> friend_sex;
    if(friend_sex == 'm'){
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    }
    if(friend_sex == 'f'){
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }


    cout << "What's the age of " << first_name << "?: ";
    int age{};
    cin >> age;
    while(age < 0 || age > 110){
        cout << "You're kidding!" << endl;
        cout << "What's the age of " << first_name << "?: ";
        cin >> age;
    }
    cout << "I hear you just had a birthday party and you are " << age << " years old." << endl;
    if(age < 12){
        cout << "Next year you will be " << age + 1 << endl;
    }
    else if(age == 17){
        cout << "Next year you will be able to vote." << endl;
    }
    else if(age > 70){
        cout << "I hope you are enjoying retirement." << endl;
    }

    cout << "Yours sincerely," << endl << endl << author_name << endl;


    return 0;
}