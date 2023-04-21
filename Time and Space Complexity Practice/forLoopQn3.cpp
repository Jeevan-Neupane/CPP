#include<iostream>
#include<vector>
using namespace std;

int main(){
    int val=0;
    int N=10;
    for(int i=1;i<N;i*=2){
        for(int j=N;j>i;j--){
            cout<<++val<<endl;

        }

    }



    return 0;
}