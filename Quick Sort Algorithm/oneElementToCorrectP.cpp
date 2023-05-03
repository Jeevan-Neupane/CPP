#include <iostream>
using namespace std;

int main()
{
    int array[] = {18,12,30,16,35,20};
    int size = sizeof(array) / sizeof(array[0]);

    int i=-1;
    for(int j=0;j<size-1;j++){
        if(array[j]<array[size-1]){
            i++;
            swap(array[i],array[j]);
        }

    }

   swap(array[i+1],array[size-1]);
    


    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

  
    return 0;
}