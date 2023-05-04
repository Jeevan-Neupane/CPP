#include<iostream>
using namespace std;




int main(){
    
  int arr[]={5,2,3,2,1};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);

    int i=0;
    while(i<size){
        if(max<arr[i]){
            max=arr[i];
        }
        i++;
    }

    int frequency[max+1];

    for(int i=0;i<max+1;i++){
        frequency[i]=0;
    }

    for(int i=0;i<size;i++){
        frequency[arr[i]]++;
    }

   //&Accumulative Frequency is calculated
    for(int i=1;i<max+1;i++){
        frequency[i]=frequency[i]+frequency[i-1];

    }

   for(int i=0;i<max+1;i++){
    cout<<frequency[i]<<endl;
   }




    return 0;
}