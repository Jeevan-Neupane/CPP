#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 8,2,4, 9};
    int size = 5;
    int minimum = array[0];
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
            index = i;
        }
    }

    cout << index << endl;
    cout << minimum << endl;

    return 0;
}