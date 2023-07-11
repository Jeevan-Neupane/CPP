#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{

    string bracket = "()())())()";
    int count = 0;
    stack<char> st;

    for (int i = 0; i < bracket.size(); i++)
    {
        if (bracket[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}