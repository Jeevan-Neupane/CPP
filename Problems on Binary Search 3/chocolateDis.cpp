#include<iostream>
#include<vector>
using namespace std;

bool Minmax(vector <int> &Box,int student,int mid){

   int numberOfstudent=1;
   int sum=0;

   for(int i=0;i<Box.size();i++){
    if(Box[i]>mid){
        return false;
    }
    if(sum+Box[i]>mid){
        numberOfstudent++;
       sum=Box[i];
       if(numberOfstudent>student){
        return false;
       }
       else{
        sum+=Box[i];
       } 
    }
   }
   return true;
}

int ChocolateDis(vector<int> &Box,int numberOfStd){
    int sum=0;
    for(int i=0;i<Box.size();i++){
        sum+=Box[i];
        
    }

    int low=Box[0];
    int high=sum;
    int ans=-1;

    while(low<=high){
        int mid=(high+low)/2;

        if(Minmax(Box,numberOfStd,mid)){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
        return ans;
        
    }

}

int main(){
    vector<int> Box{12,34,67,90};
    int numberOfBox, numberOfStd=2;

    int ans=ChocolateDis(Box,numberOfStd);
    cout<<ans<<endl;


    





    return 0;
}