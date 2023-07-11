#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int value)
{
    if (st.empty())
    {
        st.push(value);
        return;
    }

    int current = st.top();
    st.pop();

    insertAtBottom(st, value);
    st.push(current);


}

void ReverseAStack(stack<int> &st)
{
    if (st.empty())
    {

        return;
    }

    int current = st.top();

    st.pop();

    ReverseAStack(st);

    insertAtBottom(st, current);
}

int main()
{
    stack<int> st;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    ReverseAStack(st);

    while (!st.empty())
    {
        
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}