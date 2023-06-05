#include <iostream>
using namespace std;

int BinarSearchOn2D(int array[][4], int row, int low, int high, int tagetEl)
{
    int found = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[row][mid] == tagetEl)
        {
            found = 1;
            break;
           
        }
        else if(array[row][mid]>tagetEl){
            high = mid - 1;


        }
        else
        {
            low=mid+1;
        }
    }

    return found;
}

int main()
{
    int array[][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int targetEl = 55;
    int row = sizeof(array) / sizeof(array[0]);
    int col = sizeof(array[0]) / sizeof(array[0][0]);

    int found = -1;
    for (int i = 0; i < row; i++)
    {
        found = BinarSearchOn2D(array, i, 0, col - 1, targetEl);
    }
     
        if (found == 1)
        {
            cout<<"Yes the element is present in the multi dimensional array"<<endl;
        }else{
            cout<<"No its not present "<<endl;
        }

    return 0;
}