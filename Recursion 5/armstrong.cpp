#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    int num;
 
    cin>>num;
    int check=num;

    int temp=num;
    int sum=0;
    int len=0;
    while(num!=0){
        len++;
        num=num/10;
        
    }
    while(temp!=0){
        int k=temp%10;
        cout<<"Value of k "<<k<<endl;
        cout<<"Length of "<<len<<endl;
        sum=sum+pow(k,len);
        cout<<"Sum of all "<<pow(k,len)<<endl;
        cout<<"Sum of all "<<sum<<endl;
        temp/=10;


    }
    cout<<check<<endl;
    if(sum==check){
        cout<<"Yes this is a armstrong";

    }else{
        cout<<"No this is not a armstrong numbers";
    }



    return 0;
}