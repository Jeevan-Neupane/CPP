#include<iostream>
#include<vector>
using namespace std;
int AlternativeSum(int n){
    if(n==1){
        return n;
    }

    
  return AlternativeSum(n-1)+(n%2==0?(-n):n);


}

int main(){
    int n;
    cin>>n;
   int sum= AlternativeSum(n);
   cout<<sum<<endl;



    return 0;
}