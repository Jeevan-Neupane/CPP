#include <iostream>
using namespace std;

int main()
{
    int array[] = {0, 5, 0, 3, 4, 2};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = size - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag=false;
        while (j != i)
        {
            if (array[j] == 0 && array[j + 1] != 0)
            {
                swap(array[j], array[j + 1]);
            }
                j++;
                flag=true;
        }
        if(!flag){
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}