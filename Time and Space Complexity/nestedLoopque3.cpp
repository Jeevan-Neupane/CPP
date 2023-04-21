#include<iostream>
#include<vector>
using namespace std;

int main(){
   int row=5;
   int col=5;
   for(int i=0;i<row;i++){//&will operate n time throught the loop

    for(int j=0;j<col;j++){
        cout<<"*";//&will operate n time for each value of i
    }
    cout<<endl;
   }
   for(int i=0;i<row;i++){//&will operate n time throught the loop

    for(int j=0;j<i;j++){
        cout<<"*";//&will operate i time for each value of i
    }
    // &Sum of  operation in j=n^2/2-n/2 which is sum of i and operation of i is n
    //& so neglecting all const and considering only high input we can say that ya the worst time complexity is O(n^2)
    cout<<endl;
   }
   //^So worst case complexity is O(n*n)=O(n^2);
    



    return 0;
}