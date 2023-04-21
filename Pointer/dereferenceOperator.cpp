#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x=4;
    float y=.5;
    
    float *ptr2=&y;
    int *ptr=&x;//* * is used to intialize ptr as pointer
    cout<<ptr<<endl;
    cout<<*ptr<<endl;//&Use of dereference operator


    cout<<ptr2<<endl;
    cout<<*ptr2<<endl;


    x=5;
    cout<<*ptr<<endl;//&Use of dereference operator

    *ptr=56;
    cout<<x<<endl;




    return 0;
}