#include<iostream>
#include<vector>
using namespace std;

void printSubset(int number[],int n,int i,int sum,vector<int> &result){
    if(i==n){
       cout<<sum<<endl;
        return;
    }
    printSubset(number,n,i+1,sum+number[i],result);
    printSubset(number,n,i+1,sum,result);
    



}

int main(){
    int number[]={1,2};
    int n=2;
    vector <int> result;


   
    printSubset(number,n,0,0,result);
    
    // for(int i=0;i<result.size();i++){
    //     cout<<result[i]<<endl;
    // }




    return 0;
}