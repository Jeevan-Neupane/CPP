#include<iostream>
#include<vector>
using namespace std;

void Multiply(int num,int k){
    if(k==0){
     
      return;
    }
    Multiply(num,k-1);
  
    cout<<num<<" * "<<k<<" = "<<num*k<<endl;
    return;


}

int main(){
    int num,k;
    cout<<"Enter the value of num and k"<<endl;
    cin>>num>>k;
    Multiply(num,k);





    return 0;
}