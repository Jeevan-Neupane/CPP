#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,9,100};
    
   int max=array[0];

  
     for(int j=0;j<(sizeof(array)/sizeof(array[0]));j++){
        max=max>array[j]?max:array[j];
        

     }

   cout<<max<<endl;


    return 0;
}