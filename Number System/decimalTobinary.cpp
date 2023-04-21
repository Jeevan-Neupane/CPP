#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int j=0;


    cout<<j;

    while(n!=0){
        int i=n%2;
        sum=sum+i*pow(10,j);
        j++;
        n=n/2;





    }
    cout<<sum<<endl;



    return 0;
}