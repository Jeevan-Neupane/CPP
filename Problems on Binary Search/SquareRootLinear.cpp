#include<iostream>
using namespace std;

int main(){
    int x=4;
    int ans;
    for(int i=1;i<x;i++){

        if(i*i>x){
            break;
        }
        else{

            ans=i;
            
        }
    }
    cout<<ans<<endl;



    return 0;
}