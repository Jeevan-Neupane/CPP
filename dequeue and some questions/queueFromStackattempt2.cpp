#include <iostream>
#include <stack>

using namespace std;

class queue
{
    stack<int> st;

public:
    void push(int k)
    {
        st.push(k);
    }

    void pop()
    {
        if (st.empty())
            return;
        stack<int> temp;
        while (st.size() != 1)
        {
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
    }

    bool empty()
    {
        return st.empty();
    }

    int front()
    {
        if (st.empty())
            return -1;
        stack<int> temp;
        while (st.size() != 1)
        {
            temp.push(st.top());
            st.pop();
        }
        int result = st.top();
        while (!temp.empty())
        {
            st.push(temp.top());
            temp.pop();
        }
        return result;
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