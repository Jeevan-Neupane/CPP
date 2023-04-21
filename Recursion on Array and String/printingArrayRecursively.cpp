#include<iostream>
#include<vector>
using namespace std;
int printAll(int arr[],int i,int len){
    //&baseCase
    if(i==len-1){
        return 0 ;

    }
    //&self  Work
    cout<<arr[i]<<endl;

    //&Assumption

    return printAll( arr,i+1,len);
}

int main(){
    int arry[]={1,2,3,4,5};
    printAll(arry,0,5);




    return 0;
}