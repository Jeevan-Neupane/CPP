#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 8, 2, 4, 9};
    int size = 5;
    int maximum = array[0];
    int index = 0;

    for (int i = 0; i < 5; i++)
    {
        if(maximum<array[i]){
            maximum=array[i];
        }
    }

    cout<<maximum<<endl;

    return 0;
}