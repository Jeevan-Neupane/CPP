#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st,int positionToRemove)
{

    stack<int> temp;

    while (positionToRemove!=0)
    {
        int currentEl = st.top();
        temp.push(currentEl);
        st.pop();
        positionToRemove--;
    }
    st.pop();
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
    int indx = 2;
    int positionToRemove = st.size() - indx - 1;

    insertAtBottom(st,positionToRemove);

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}