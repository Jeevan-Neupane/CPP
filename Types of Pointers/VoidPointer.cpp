#include<iostream>
#include<vector>
using namespace std;

int main(){
    void *ptr=NULL;
    float a=3.4;
    ptr=&a;
    cout<<ptr<<endl;


    int x=12;
    ptr=&x;
    
    cout<<ptr<<endl;
    cout<<*(int *)ptr<<endl;//*Type casting of void to int pointer



    return 0;
}