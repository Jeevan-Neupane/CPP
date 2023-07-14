#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int maxWindow(vector<int> &arr, int k)
{
    deque<int> dq;
    for (int i = 0; i < k; i++)
    {
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (int i = k; i < arr.size(); i++)
    {
        int curr = arr[i];
        if (dq.front() == (i - k))
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    return arr[dq.front()];
}

int main()
{
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    cout << maxWindow(arr, 3) << endl;

    return 0;
}