#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6,3,2,0};
    
    int size=sizeof(array)/sizeof(array[0]);

    int index=-1;

    for(int i=0;i<size-2;i++){
        if((array[i]<array[i+1]) && (array[i+1]>array[i+2])){
            index=i+1;
        }

    }

    cout<<array[index]<<endl;
     



    return 0;
}