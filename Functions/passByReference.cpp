#include<iostream>
using namespace std;

void changeValue(int &z){

    z=100;
}
int main(){
    int p=5;

    changeValue(p);

    cout<<p<<endl;
    // int &q=p;
    // q++;
    // cout<<p<<endl;

    // cout<<&p<<endl;
    // cout<<&q<<endl;



    return 0;
}