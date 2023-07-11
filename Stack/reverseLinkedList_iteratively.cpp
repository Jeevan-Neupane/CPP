#include <iostream>
#include <stack>
using namespace std;

void reverseIt(stack<int> &st)
{
    stack<int> st1, st2;

    while (!st.empty())
    {
        int value = st.top();
        st1.push(value);
        st.pop();
    }
    while (!st1.empty())
    {
        int value = st1.top();
        st2.push(value);
        st1.pop();
    }
    while (!st2.empty())
    {
        int value = st2.top();
        st.push(value);
        st2.pop();
    }
}

int main()
{

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

  
    reverseIt(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}