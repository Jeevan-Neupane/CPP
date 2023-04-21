#include<iostream>
using namespace std;

void changeValue(int b){
    b=100;
}

int main(){
    int a=5;
    changeValue(a);
    //!value of a is copied to b 
    cout<<a<<endl;




    return 0;
}