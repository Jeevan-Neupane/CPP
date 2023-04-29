#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 8,100, 2, 4, 9};
    int size = 6;
  
    int maximum;
    for (int i = size - 1; i >= 0; i--)
    {
        maximum = i;
        for (int j = i-1; j >= 0; j--)
        {
            if (array[maximum] < array[j])
            {
                maximum = j;
            }
        }
        if (maximum != i)
        {

            swap(array[maximum], array[i]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}