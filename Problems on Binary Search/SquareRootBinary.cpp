#include<iostream>
using namespace std;

int main(){
    int x=24;

    int start=1;
    int end=x;
    int ans=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        
        if(mid*mid<=x){
            start=mid+1;
            ans=mid;
            
        }
        else if(mid*mid>x){
            end=mid-1;
        }else{
            start=mid+1;

        }


    }

    cout<<ans<<endl;
    



    return 0;
}