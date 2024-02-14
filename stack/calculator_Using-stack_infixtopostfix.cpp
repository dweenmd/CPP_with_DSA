/*
Evaluate it using stack. All the numbers are single digit numbers in
the input so you don’t have to worry about multi digit numbers.

Sample Input     Sample Output

4+(5+6)*8-1         91

(2+4)*(5+6)         66
Congratulations you just built a mini calculator if you solved it correctly.

*/

#include<bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

// Function to convert infix to postfix
string infixToPostfix(const string &infix)
{
    string postfix = "";
    stack<char> operators;

    for (char ch : infix)
    {
        if (isdigit(ch))
        {
            postfix += ch;
            postfix += ' '; // Add space to separate digits
        }
        else if (ch == '(')
        {
            operators.push(ch);
        }
        else if (ch == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.pop(); // Pop '('
        }
        else
        {
            while (!operators.empty() && precedence(ch) <= precedence(operators.top()))
            {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.push(ch);
        }
    }

    // Pop remaining operators from stack
    while (!operators.empty())
    {
        postfix += operators.top();
        postfix += ' ';
        operators.pop();
    }

    return postfix;
}

// Function to evaluate postfix expression
int evaluatePostfix(const string &postfix)
{
    stack<int> st;

    for (char ch : postfix)
    {
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else if (ch != ' ')
        { // Skip space characters
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            switch (ch)
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    string infix;
    cout << "Enter an infix expression: ";
    getline(cin, infix);

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}
