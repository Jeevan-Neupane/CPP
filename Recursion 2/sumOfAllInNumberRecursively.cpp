#include<iostream>
#include<vector>
using namespace std;

int sumOfAll(int n){


    if(n>=0 && n<=9){
        return n;
    }
   return sumOfAll(n/10)+n%10;
   

}

int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
   int sum= sumOfAll(n);
   if(sum>9){
   sum= sumOfAll(sum);
   }
   cout<<"Sum of all is "<<sum<<endl;
    




    return 0;
}