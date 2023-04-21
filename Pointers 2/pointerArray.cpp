#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a[]={1,2,3};
    int (*p)[3]=&a;
    cout<<(*p)<<endl<<*(*p)<<endl<<*(&p)<<endl<<a;




    return 0;
}