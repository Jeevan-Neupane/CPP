#include <iostream>
#include <stack>
using namespace std;

void Transfer(stack<int> &st, stack<int> &result)
{
    if (st.empty())
    {

        return;
    }

    int current = st.top();
    st.pop();
    Transfer(st, result);
    result.push(current);
}

int main()
{
    stack<int> st;
    stack<int> st2;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    Transfer(st, st2);

    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    return 0;
}