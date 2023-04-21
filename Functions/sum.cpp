#include<iostream>
using namespace std;

int sum(int a,int b);
int sum(int a, int b, int c);

float sum(float a, float b, float c){

    return a+b+c;
}


int main(){
    
    cout<<sum(10,30)<<endl;
    cout<<sum(10,30,10)<<endl;
    float a=1.2;
    float b=1.2;
    float c=1.7;
    cout<<sum(a,b,c)<<endl;



    return 0;
}

int sum(int num1,int num2){
    return num1+num2;
}


int sum(int a,int b,int c){
    return a+b+c;
}
