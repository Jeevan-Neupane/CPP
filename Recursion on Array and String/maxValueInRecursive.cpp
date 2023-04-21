#include<iostream>
#include<vector>
using namespace std;
int MaxValue(int arr[],int i,int len){
    //&baseCase
    if(i==len-1){
        return arr[i] ;

    }
 
    //&self  Work


    //&Assumption

    return max(arr[i],MaxValue( arr,i+1,len));
}

int main(){
  int arry[]={3,100,3,2,5};

     int max=MaxValue(arry,0,5);
    cout<<max;




    return 0;
}