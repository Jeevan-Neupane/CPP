#include<iostream>
#include<vector>
using namespace std;

int main(){
    int p , q;
    cout<<"Enter the value of p and q for p^q"<<endl;
    cin>>p>>q;
    int product=1;
    for(int i=1;i<=q;i++){
        product*=p;

    }
    cout<<"The  product is "<<product<<endl;



    return 0;
}