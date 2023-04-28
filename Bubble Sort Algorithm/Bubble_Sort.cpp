#include <iostream>
using namespace std;

int main()
{
    int number[] = {20, 50, 40, 10, 30};
    int size=5;

    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
         
        }
        cout<<"New Array "<<i<<endl;
        for (int i = 0; i < 5; i++)
        {
            cout << number[i] << endl;
        }
    }

    cout<<"***************************************"<<endl;
    cout<<"Finall Array"<<endl;
     for (int i = 0; i < 5; i++)
        {
            cout << number[i] << endl;
        }

    return 0;
}