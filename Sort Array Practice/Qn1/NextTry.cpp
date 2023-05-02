#include <iostream>
using namespace std;

int main()
{
    int array[] = {0,5,0,3,4,2};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] == 0 && array[j+1]!=0)
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}