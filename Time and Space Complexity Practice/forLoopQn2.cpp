#include<iostream>
#include<vector>
using namespace std;

int main(){
    int val=0;
    for(int i=1;i<=10;i=i*2){ 
        for(int j=1;j<=i;j++){
            val++;
            cout<<val<<endl;
        }
    }
//hence worst time complexity is O(n)

    return 0;
}