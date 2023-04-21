#include<iostream>
#include<vector>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n;i>0;i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int rows;
    cin>>rows;
    

    for(int i=0;i<rows;i++){
        for(int j=0;j<=i;j++){
           int  num=(factorial(i)/(factorial(j)*factorial(i-j)));
           cout<<num<<" ";


        }
        cout<<endl;
    }

    




    return 0;
}