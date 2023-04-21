#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    int m;
    n=5;
    m=5;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<sqrt(i);j++){

            cout<<i<<" "<<j<<endl;
            
        }//&This loop will execute for sqrt(n) times for each i

    }
    // &Sot worst case time complexity is O(n*sqrt(n)); 
    



    return 0;
}