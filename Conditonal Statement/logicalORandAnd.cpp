#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    (num%3==0 && num%5==0)?cout<<"Divided by both 3 and 5":cout<<"Not divided by 5 or three";



    return 0;
}