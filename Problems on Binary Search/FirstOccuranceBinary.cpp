#include <iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int targetEl)
{
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (array[mid] == targetEl)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (array[mid] < targetEl)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int array[] = {2, 6, 6, 6, 6, 6, 9, 9, 9, 9};
    int size = sizeof(array) / sizeof(array[0]);
    int start = 0;
    int end = size - 1;
    int targetEl = 5;

    int index = binarySearch(array, start, end, targetEl);
    cout<<index<<endl;
   

    return 0;
}