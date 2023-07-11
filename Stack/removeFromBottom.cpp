#include <iostream>
#include <stack>
using namespace std;

void RemoveFromBottom(stack<int> &st)
{
    if (st.size() == 1)
    {

        st.pop();
        return;
    }

    int current = st.top();
    st.pop();
    RemoveFromBottom(st);
    st.push(current);
}

int main()
{
    stack<int> st;
    stack<int> st2;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    RemoveFromBottom(st);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}