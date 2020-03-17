#include<iostream>
#include<string>

using namespace std;

void error(string error_message)
{
    throw runtime_error(error_message);
}

class Token
{
    public:
        char kind;
        double value;
};

void displayToken(Token token_object)
{
    cout << "This Token's data members: " << endl;
    cout << "kind: " << token_object.kind << endl;
    cout << "value: " << token_object.value << endl;
}

int main(void)
{
    Token t;
    t.kind = 't';
    t.value = 33.44;

    Token tt = t;
    if (tt.kind != t.kind)
        error("impossible!");
    displayToken(tt);
    
    cout << "End of program!" << endl;

    return 0;
}