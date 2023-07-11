#include <iostream>
#include <stack>
using namespace std;

void Transfer(stack<int> &st, int value)
{
    if (st.empty())
    {

        st.push(value);
        return;
    }

    int current = st.top();
    st.pop();
    Transfer(st, value);
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
    int value = 100;
    Transfer(st, value);
    int value2=1000;
    Transfer(st,value2);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}