#include <iostream>
using namespace std;

int BinarySearch(int array[], int start, int high, int targetEl)
{
    if (start > high)
    {
        return -1;
    }
    int mid = start + (high - start) / 2;
    if (array[mid] == targetEl)
    {
        return mid;
    }

    if (array[mid] < targetEl)
    {
        BinarySearch(array, mid + 1, high, targetEl);
    }
    else
    {
        BinarySearch(array, start, mid - 1, targetEl);
    }
}

int main()
{
    int array[] = {1, 9, 13, 15, 18, 22, 35, 40};

    int size = sizeof(array) / sizeof(array[0]);
    int targetEl = 22;
    int start = 0;
    int result = 0;

    result = BinarySearch(array, start, size - 1, targetEl);
    cout << result << endl;

    return 0;
}