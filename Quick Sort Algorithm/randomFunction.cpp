#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int array[] = {18, 12, 30, 16, 35, 20};
    int size = sizeof(array) / sizeof(array[0]);
    srand(time(0));
    for (int i = 0; i < 6; i++)
    {
        cout << rand() << endl;
    }

    return 0;
}