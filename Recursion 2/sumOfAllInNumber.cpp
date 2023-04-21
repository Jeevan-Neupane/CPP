#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int sum=0;
    while(n!=0){
        int i=n%10;
        sum+=i;
        n=n/10;

    }
    cout<<"The sum of the all number is "<<sum<<endl;



    return 0;
}