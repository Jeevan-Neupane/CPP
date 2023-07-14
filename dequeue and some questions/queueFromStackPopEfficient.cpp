#include <iostream>
#include <stack>

using namespace std;

class queue
{
    stack<int> st;

public:
    void push(int k)
    {

        stack<int> temp;
        while (!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        st.push(k);
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }

    void pop()
    {
        st.pop();
    }

    bool empty()
    {
        return st.empty();
    }

    int front()
    {
        if (st.empty())
            return -1;
        return st.top();
    }
};

int main()
{
    queue que;
    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);
    que.pop();

    while (!que.empty())
    {
        cout << que.front() << " ";
        que.pop();
    }

    return 0;
}