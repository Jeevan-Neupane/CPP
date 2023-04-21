#include<iostream>
#include<vector>
using namespace std;

int pPowerQ(int p,int q){

    if(q==0){
        return 1;
    }
    if(q==1){
        return p;
    }

    return p*pPowerQ(p,q-1);
}

int main(){
    int p , q;
    cout<<"Enter the value of p and q for p^q"<<endl;
    cin>>p>>q;
   int product= pPowerQ(p,q);
   cout<<"The product is "<<product<<endl;
   
  


    return 0;
}