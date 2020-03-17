// 

#include<iostream>
using namespace std;

void error(string error_message)
{
    throw runtime_error(error_message);
}

class Token;
class Token_stream;
class Invalid;
Token get_token(void);
double primary(void);
double term(void);
double expression(void);

int main(void)
{
    try
    {
        while (cin)
            cout << expression() << endl;
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
        return 1;
    }
    catch (...)
    {
        cerr << "Weird Exception!" << endl;
        return 3;
    }
    
    return 0;
}

class Token
{
    public:
        char kind;
        double value;
};

class Token_stream
{
    public:
        Token get();
        void putback(Token t);
    private:
        bool full{false};
        Token buffer;
};

void Token_stream::putback(Token t)
{
    if (full)
        error("'putback() used in an already full buffer!");
    buffer = t;
    full = true;
}

Token Token_stream::get()
{
    if (full)
    {
        full = false;
        return buffer;
    }

    char character;
    cin >> character;

    switch (character)
    {
        case ';': // for "print"
        case 'q': // for "quit"
        case '(': case ')': case '+': case '-': case '*': case '/':
            return Token{character};
        case '.':
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(character);
            double value;
            cin >> value;
            return Token{'8', value};
        }
        default: 
            error("Bad Token!");

    }
}
double primary(void)
{
    Token t = Token_stream();

    switch (t.kind)
    {
        case '(':
        {
            double d = expression();
            t = get_token();
            if (t.kind != ')')
                error("')' expected!");
            return d;
        }
        case '8':
            return t.value;
        default:
            error("Primary expected!");
    }
}

double term(void)
{
    double left = primary();
    Token t = get_token();
    while (true)
    {
        switch (t.kind)
        {
            case '*':
                left *= primary();
                t = get_token();
                break;
            case '/':
            {
                double d = primary();
                if (d == 0)
                    error("Zero division!");
                left /= primary();
                t = get_token();
                break;
            }
            default:
                return left;
        }
    }
}
double expression(void)
{
    cout << "Enter an expression: ";
    double left = term();
    Token t = get_token();
    while (true)
    {
        switch (t.kind)
        {
        case '+':
            left += term();
            t = get_token();
            break;
        case '-':
            left -= term();
            t = get_token();
            break;
        default:
            return left;
        }
    }

    cout << "Program finished." << endl;
    return 0;
}

Token get_token(void)
{
    Token t;
    return t;
}