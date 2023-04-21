#include<iostream>
#include<vector>
using namespace std;

int main(){
    int val=0;
    int N=10;
    for(int i=N;i>0;i=i/2){
        for(int j=0;j<i;j++){
            val++;
            cout<<val<<endl;
        }
    }

    // !The complexity is O(N)



    return 0;
}