//*Here we will use loop for binary search
#include<iostream>
using namespace std;

int BinarySearch(int array[], int start, int end, int targetEl)
{

    while (start <= end)
    {
        int mid =start+ (end-start) / 2;//*Modified mid to tackle overflow

        if (array[mid] == targetEl)
        {
            return mid;
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

    return -1;
}

int main()
{
    int array[] = {1, 9, 13, 15, 18, 22, 35, 40};

    int size = sizeof(array) / sizeof(array[0]);
    int targetEl = 40;
    int start = 0;

    int result = BinarySearch(array, start, size - 1, targetEl);

    cout<<result<<endl;

  

    return 0;
}