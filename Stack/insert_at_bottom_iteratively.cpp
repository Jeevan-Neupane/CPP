#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int number)
{

    stack<int> temp;

    while (!st.empty())
    {
        int currentEl = st.top();
        temp.push(currentEl);
        st.pop();
    }
    st.push(number);
    while (!temp.empty())
    {
        int currentEl = temp.top();
        st.push(currentEl);
        temp.pop();
    }
}

int main()
{
    stack<int> st;
    stack<int> st2;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    int value = 2;
    insertAtBottom(st, value);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}