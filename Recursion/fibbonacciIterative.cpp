#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a=0;
    int b=1;
    int c;
    for(int i=0;i<10;i++){
        c=a+b;
        a=b;
        b=c;
    }

        cout<<a<<endl;
        cout<<b<<endl;


    return 0;
}