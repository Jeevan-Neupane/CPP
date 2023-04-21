#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arry[]={1,2,3,4,5,6,7,8,9,0};
    // cout<<*arry<<endl;
    // cout<<*&arry[0]<<endl;

    for(int i=0;i<sizeof(arry)/sizeof(arry[0]);i++){
        cout<<*(arry+i)<<endl;
       
    }

    return 0;
}