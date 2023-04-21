#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arry[]={1,2,3};
    int *ptr=&arry[0];
    cout<<*++ptr;



    return 0;
}