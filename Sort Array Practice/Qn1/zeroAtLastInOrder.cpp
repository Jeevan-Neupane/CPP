#include <iostream>
using namespace std;

int main()
{
    int array[] = {0, 5, 0, 3, 42};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 1; i < size; i++)
    {
        int CV = array[i];
        int j = i - 1;
        if (j >= 0 && CV == 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = CV;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    for (int i = 0; i < size / 2; i++)
    {
        for (int j = size - 1 - i; j > size / 2; j++)
        {
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}