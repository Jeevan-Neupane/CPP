#include<iostream>
using namespace std;

int main(){
    // int i=1;
    // while(i<5){
    //     cout<<i<<endl;
    //     i++;

    // }
   int n;
   int i=0;
   int sum=0;

   cout<<"Enter the value of n"<<endl;
   cin>>n;

   while(i<=n){
    sum=sum+i;
    i++;



   }
   cout<<"The sum of number is"<<endl<<sum<<endl;



    return 0;
}