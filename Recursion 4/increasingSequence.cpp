#include<iostream>
#include<vector>
using namespace std;

void Print(int n,int i){

    if(i==n){
        cout<<n;
        return;
    }
    cout<<i<<" ";
    Print(n,i+1);
}

void PrintAnotherWay(int n){
    if(n<1){
        return;
    }
   PrintAnotherWay(n-1);
   cout<<n<<" ";
   return;
}
int main(){
    int n;
    cout<<"Enter the maximum limit"<<endl;
    cin>>n;
    // Print(n,1);
    PrintAnotherWay(n);
    



    return 0;
}