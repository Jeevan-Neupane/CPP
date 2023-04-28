#include <iostream>
using namespace std;

int main()
{
    int num[] = {5, 8, 4, 9, 5};
    int minimum;

    for (int i = 0; i < 4; i++)
    {
        int index = i;
        minimum = num[i];
        for (int j = i + 1; j < 5; j++)
        {

            if (minimum > num[j])
            {
                minimum = num[j];
                index = j;
            }
        }
        // cout<<index<<endl;
       if(index!=i){

        swap(num[i], num[index]);
       }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}