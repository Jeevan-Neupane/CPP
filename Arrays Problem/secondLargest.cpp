
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x[] = {1,2,3,4,5};
    int max=INT_MIN;
    cout<<max;

    int largest = 0;
    int maxIndex=-1;

    for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
       if(largest<x[i]){
         maxIndex=i;
      
       }
    }

    x[maxIndex]=INT16_MIN;
    for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
       cout<<x[i]<<endl;
    }
 for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    {
       if(largest<x[i]){
         largest=x[i];
      
       }
    }

    cout<<"Second  Largest Number is "<<largest;


    // for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    // {
    //     if (x[i] > 0)
    //     {
    //         unique = x[i];
    //     }
    // }

   

    return 0;
}