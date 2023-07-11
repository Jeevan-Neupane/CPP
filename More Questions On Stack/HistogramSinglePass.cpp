#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int greatestArea(vector<int> &arr)
{
    int size = arr.size();
    vector<int> result(size, -1);

    stack<int> st;
    int ans = INT32_MIN;
    st.push(0);

    for (int i = 1; i < size; i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            int el = arr[st.top()];
            int nsi = i;
            int psi = (st.empty()) ? (-1) : st.top();
            ans = max(ans, el * (nsi - psi - 1));
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        int el = arr[st.top()];
        int nsi = size;
        st.pop();
        int psi = (st.empty()) ? (-1) : st.top();
        ans = max(ans, el * (nsi - psi - 1));
    }

    return ans;
}

int main()
{
    vector<int> height{2, 1, 5, 6, 2, 3, 0, 2, 1, 10, 11, 2, 3};

    int result = greatestArea(height);
    cout << result << endl;

    return 0;
}