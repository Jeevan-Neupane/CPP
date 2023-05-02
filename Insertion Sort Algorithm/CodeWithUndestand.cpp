#include <iostream>
using namespace std;

int main()
{
    int array[] = {11, 8, 15, 9, 4};
    int size = 5;

    for (int i = 1; i < size; i++)
    {
        int CV = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > CV)
        {
            array[j + 1] = array[j];
          
            j--;
            
        }
        array[j + 1] = CV;
      
    }

    cout<<"Final Answer is "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

    return 0;
}