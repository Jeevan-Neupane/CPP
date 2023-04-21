#include<iostream>
#include<vector>
#include<math.h>
using namespace std;


int Pow(int a,int b){
    if(b==1){
        return a;
    }
    return a*Pow(a,b-1);
}

int Armstrong(int num,int len){
  if(num>=0 && num<=9){
    // cout<<pow(num,len)<<endl;
    return Pow(num,len);
  }
//   cout<< pow(num%10,len)<<endl;


  return Pow(num%10,len)+Armstrong(num/10,len);

}

int main(){

    int num;
    int len=0;
    cin>>num;
    int temp=num;

    while(temp!=0){
        temp=temp/10;
        len++;


    }
    // cout<<len<<endl;

    int SumNumber=Armstrong(num,len);
    // cout<<SumNumber<<endl;
    

    if(SumNumber==num){
        cout<<"Yes It is Armstrong Number"<<endl;
    }
    else{
        cout<<"No It is not"<<endl;
    }

    

    
    



    return 0;
}