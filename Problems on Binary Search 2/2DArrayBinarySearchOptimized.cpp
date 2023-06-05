#include <iostream>
using namespace std;

int BinarySearch(int array[][4], int high, int low, int targetEl, int col)
{
    int index = -1;
   

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        
        int x = mid / col;
        int y = mid % col;
        // cout<<row<<" "<<col<<endl;

        if (targetEl == array[x][y])
        {
            index=1;
            break;
        
        }
        else if (array[x][y] > targetEl)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return index;
}

int main()
{
    int array[][4] = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int targetEl = 35;
    int row = sizeof(array) / sizeof(array[0]);
    int col = sizeof(array[0]) / sizeof(array[0][0]);

    int high = (row * col) - 1;
    // cout<<col<<endl;
    int low = 0;

    int found = BinarySearch(array, high, low, targetEl, col);
    cout << found << endl;

    return 0;
}