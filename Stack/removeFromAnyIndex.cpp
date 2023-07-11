#include <iostream>
#include <stack>
using namespace std;

void RemoveFromAnyIndex(stack<int> &st, int remove)
{
    if (remove == 0)
    {

        st.pop();
        return;
    }

    int current = st.top();
    st.pop();
    remove--;
    RemoveFromAnyIndex(st, remove);
    st.push(current);
}

int main()
{
    stack<int> st;
    stack<int> st2;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    int index = 2;
    int remove = st.size() - index - 1;
    RemoveFromAnyIndex(st, remove);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}