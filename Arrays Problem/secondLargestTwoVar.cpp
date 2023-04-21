#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x[] = {1,6,3,4,7,5,2};
    int largest=INT16_MIN;
    int secondLargest=INT16_MIN+1;


   for(int i=0;i<sizeof(x)/sizeof(x[0]);i++){
    if(largest<x[i]){
        largest=x[i];
    }
  
    if(secondLargest<x[i] && x[i]!=largest){
        secondLargest=x[i];
    }
   
   }
    cout<<"The number of pair is "<<secondLargest<<endl;
    cout<<"The number of pair is "<<largest<<endl;




    return 0;
}