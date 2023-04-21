#include<iostream>
#include<vector>
using namespace std;

int main(){
    int value=0;
    int n=100000;
    for(int i=1;i<=n;i=i*2){
        cout<<i<<endl;



    }

    for(int i=0;i<=n;i+=i){
        cout<<i<<endl;
    }//Same solution

    //Solution of this question can be done by
    /*
    The icrement of i is by 2 times in each loop 
    So we will get 2^k value of i in each loop
    And 2^k<=n will be the terminated loop and since 2^0 is also one loop includig it we can say there are 2^k+1=n operations
    So taking log on both side and ignoring all the constant term we can get worst time complexity is :
    */
   //& -----------------------------------O(log(n))------------------------------------------



    return 0;
}