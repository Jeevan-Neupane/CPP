#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 6, 9, 3, -1, 8, 2};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 0;
    int find = 0;
    for (int i = 0; i < size; i++)
    {
        if (target == array[i])
        {
            
            find = 1;
        }
       
    }
 
    if (find)
    {
        cout << "Yes It is present " << endl;
    }
    else
    {
        cout << "No it is not present" << endl;
    }

    return 0;
}