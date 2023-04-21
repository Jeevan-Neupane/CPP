#include<iostream>
#include<vector>
using namespace std;

int HCF(int num1,int num2){

    if(num2==0){
        return num1;
    }
    HCF(num2,num1%num2);
    
   
}

int main(){
    int num1,num2;

    cin>>num1>>num2;

    num2>num1?swap(num1,num2):swap(num1,num1);




   
  

    // for(int i=num1;i>=1;i--){
    //     if(num1%i==0 && num2%i==0){
    //          cout<<i<<endl;
    //          break;
    //     }
        
    // }

    int ans=HCF(num1,num2);
    cout<<ans;

   



    return 0;
}