#include<iostream>
using namespace std;

int main(){
    float per;

    cout<<"Enter your age";
    cin>>per;
    if(per<12){
        cout<<"Child";
    }
    else if(per>18){
        cout<<"Adult";
    }
    else{
        cout<<"Teenager";
    }


    return 0;
}