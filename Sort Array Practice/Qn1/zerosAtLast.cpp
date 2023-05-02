#include<iostream>
using namespace std;

int main(){
    int array[]={0,5,0,3,4,2};
    int size=sizeof(array)/sizeof(array[0]);
   
   for(int i=0;i<size;i++){
    int MaxEl=i;
    for(int j=i+1;j<size;j++){
        if(array[MaxEl]<array[j]){
            MaxEl=j;
        }

    }
    swap(array[i],array[MaxEl]);
   }

   for(int i=0;i<size;i++){
    cout<<array[i]<<endl;
   }





    return 0;
}