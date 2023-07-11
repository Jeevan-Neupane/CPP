#include <iostream>
#include <stack>
using namespace std;

void Transfer(stack<int> &st, int value, int position)
{
    if (st.empty() || position == 0)
    {

        st.push(value);
        return;
    }

    int current = st.top();
    st.pop();
    position--;

    Transfer(st, value, position);
    st.push(current);
}

int main()
{
    stack<int> st;
    stack<int> st2;
    int index = 9;

    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    int value = 100;
    Transfer(st, value, st.size() - index);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}