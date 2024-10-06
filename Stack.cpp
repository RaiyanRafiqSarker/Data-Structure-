#include <iostream>
#include <stack>
#include <string>
using namespace std;


bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


int precedence(char op)
{
    if (op == '+' || op == '-')
        {
        return 1;
    }
    else if (op == '*' || op == '/')
        {
        return 2;
        }
        return 0;
}



         string infixToPostfix(const string& infix){
         stack<char> operatorStack;
         string postfix = "";


    for (char c : infix)
        {
        if (isalnum(c))
            {
            postfix += c;
        }
    else if (c == '(')
                {


            operatorStack.push(c);
        }
    else if (c == ')')



        {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            if (!operatorStack.empty() && operatorStack.top() == '(') {
                operatorStack.pop();
            }
        }
        else if (isOperator(c))
        {
            while (!operatorStack.empty() && operatorStack.top() != '(' && precedence(c) <= precedence(operatorStack.top()))
                    {
                postfix += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }


    while (!operatorStack.empty()) {
        postfix += operatorStack.top();
        operatorStack.pop();
    }


    return postfix;
}





int main() {
    string infixExpression ;
    cout << "Enter the infixExpression: "<<infixExpression;
    cin>>infixExpression;
    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Infix Expression: " << infixExpression << endl;
    cout << "Postfix Expression: " << postfixExpression << endl;
    return 0;
}

