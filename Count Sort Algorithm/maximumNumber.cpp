#include<iostream>
using namespace std;

int main(){
    int arr[]={5,2,3,200,1,10,20,56};
    int max=arr[0];
    int size=sizeof(arr)/sizeof(arr[0]);

    int i=0;
    while(i<size){
        if(max<arr[i]){
            max=arr[i];
        }
        i++;
    }

    cout<<max<<endl;



    return 0;
}