#include<iostream>
#include<stack>
using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(string expression) {
    stack<int> s;
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (isdigit(c)) {
            s.push(c - '0'); // Convert character to integer and push to stack
        } else {
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();
            switch (c) {
                case '+':
                    s.push(operand1 + operand2);
                    break;
                case '-':
                    s.push(operand1 - operand2);
                    break;
                case '*':
                    s.push(operand1 * operand2);
                    break;
                case '/':
                    s.push(operand1 / operand2);
                    break;
                // Add more operators as needed
            }
        }
    }
    return s.top();
}

int main() {
    string postfixExpression;
    cout << "Enter a postfix expression: ";
    cin >> postfixExpression;

    int result = evaluatePostfix(postfixExpression);
    cout << "Result of the postfix expression: " << result << endl;

    return 0;
}
