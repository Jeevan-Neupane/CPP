#include <iostream>
using namespace std;

int main()
{
   
    int number[] = {10,20,30,30,50};
    int size = 5;
    int flag = 0;
    int *ptr;
    ptr=&number[2];
    cout<<ptr<<endl;

    for (int i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (number[j] > number[j + 1])
            {
                int temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
                flag++;
            }
        }
        if(flag==0){
            break;
        }
        cout << flag << endl;
    }

    cout << "***************************************" << endl;
    cout << "Finall Array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << number[i] << endl;
    }

    cout<<&number[2]<<endl;

    return 0;
}