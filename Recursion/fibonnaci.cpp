#include<iostream>
#include<vector>
using namespace std;

int fibbo(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fibbo(n-1)+fibbo(n-2);

}

int main(){
    int n;
    cin>>n;
    int fibboNumber=fibbo(n);
    cout<<fibboNumber<<endl;



    return 0;
}