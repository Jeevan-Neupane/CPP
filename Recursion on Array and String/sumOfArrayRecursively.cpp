#include<iostream>
#include<vector>
using namespace std;


int sumOfAll(int arr[],int i,int len){

    if(i==len-1){
        return arr[i];
        
    }
    return arr[i]+sumOfAll(arr,i+1,len);
}

int main(){
    int arr[]={2,3,5,20,1};
    int sum=sumOfAll(arr,0,5);
    cout<<sum<<endl;
    



    return 0;
}