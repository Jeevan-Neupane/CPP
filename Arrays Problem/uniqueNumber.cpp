
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x[] = {1, 2, 4, 3, 2, 3, 1, 4, 5};

    int unique = -10;

    for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
        for (int j = i + 1; j < (sizeof(x) / sizeof(x[0])); j++)
        {
            if (x[i] == x[j])
            {
                x[i] = -1;
                x[j] = -1;
            }
        }
    }

    for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
        if (x[i] > 0)
        {
            unique = x[i];
        }
    }

    cout << "The unique value is " << unique << endl;

    return 0;
}