#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int x,y;  //*Garbage Value
    int *ptrx=&x;
    int *ptry=&y;

    cin>>x>>y;

    int result;

    int *resultptr=&result;

    *resultptr=*ptrx+*ptry;

    cout<<"Sum of x and y is "<<*resultptr<<endl;



    return 0;
}