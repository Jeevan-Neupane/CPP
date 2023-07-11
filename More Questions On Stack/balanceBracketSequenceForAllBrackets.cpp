#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str)
{
    stack<char> st;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            st.push(str[i]);
        }
        else
        {

            if (str[i] == ')' && !st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else if (str[i] == ']' && !st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else if (str[i] == '}' && !st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }

    }
    return st.empty();
}
int main()
{
    string str = "(((())([]{}[[]]}[]))";
    cout << isValid(str) << endl;

    return 0;
}