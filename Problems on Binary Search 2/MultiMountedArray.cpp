#include <iostream>
#include <vector>
using namespace std;

int FindPeak(vector<int> &V, int low, int high)
{

    int maxIndex = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid == 0)
        {
            if (V[mid] > V[mid + 1])
            {
                return mid;
            }
            else
            {
                return mid + 1;
            }
        }

        else if (V[mid] >= V[mid - 1])
        {
            maxIndex = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return maxIndex;
}

int main()
{
    vector<int> V{1,2,1};
    int index = FindPeak(V, 0, V.size() - 1);
    cout << index << endl;

    return 0;
}