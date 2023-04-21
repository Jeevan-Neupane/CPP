#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={1,2};
    int *ptr;
    ptr=&arr[0];
    cout<<*ptr++<<endl;//*Looks like confusioin this doesn't increase the dereference operator rather it increase the pointer operator and point to next array element
    cout<<*ptr<<endl;
    // cout<<*ptr<<endl;
    // ptr+=1;
    // cout<<*ptr<<endl;




    return 0;
}