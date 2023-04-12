#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int isOperator(char z)
{
    if(z == '*' || z == '/' || z == '+' || z == '-')
        return 1;

    return 0;
}

int precedence(char z)
{
    if (z == '/' || z == '*')
        return 2;
    
    else if ( z == '+' || z == '-')
        return 1;
    
    return -1;

}

string infix_to_postfix(string str)
{
    string postfix;
    stack<char> s;

    for(string::iterator itr = str.begin(); itr != str.end(); itr++)
    {
        if(isOperator(*itr) == 0)
        {
            postfix += *itr;
        }
        else
        {
            while(!s.empty() && s.top() != -1 && precedence(*itr) <= precedence(s.top()))
            {
                postfix += s.top();
                s.pop();
            }
            s.push(*itr);
        }
    }

    while(!s.empty() && s.top() != -1)
    {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main()
{
    string str;
    cout << "Enter the expression: ";
    cin >> str;

    cout << infix_to_postfix(str) << endl;
    return 0;
}
