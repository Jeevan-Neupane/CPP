#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> nge(vector<int> &arr)
{
    int size = arr.size();
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    
    vector<int> ans(size, -1);

    stack<int> st;
    st.push(0);

    for (int i = 1; i < size; i++)
    {
        while (!st.empty() && arr[i] > arr[st.top()])
        {
            ans[st.top()] = size - i - 1;
            st.pop();
        }
        st.push(i);
    }

    for (int i = 0; i < size / 2; i++)
    {
        temp = ans[i];
        ans[i] = ans[size - i - 1];
        ans[size - i - 1] = temp;
    }
    return ans;
}

int main()
{
    vector<int> v{100, 80, 60, 70, 60, 75, 85};

    vector<int> result = nge(v);
    for (int i = 0; i < result.size(); i++)
    { 
        cout << i-result[i] << " ";
    }

    return 0;
}