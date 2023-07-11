#include <iostream>
#include <stack>
using namespace std;

stack<int> Transfer(stack<int> &st)
{
    stack<int> st3;
    while (!st.empty())
    {
        int a = st.top();
        st3.push(a);
        st.pop();
    }
    stack<int> st2;
    while (!st3.empty())
    {
        int b = st3.top();
        st2.push(b);
        st3.pop();
    }
    return st2;
}

int main()
{
    stack<int> st;
    stack<int> st2;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    st2 = Transfer(st);
    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    return 0;
}