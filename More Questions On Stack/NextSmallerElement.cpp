#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nse(vector<int> &arr)
{
    int size = arr.size();
    vector<int> ans(size, -1);

    stack<int> st;

    st.push(0);

    for (int i = 1; i < size; i++)
    {
        while (!st.empty() && arr[i] < arr[st.top()])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }

    return ans;
}

int main()
{
    vector<int> v{4, 6, 3, 8, 0};

    vector<int> result = nse(v);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}