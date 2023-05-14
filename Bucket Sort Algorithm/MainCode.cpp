#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

void bucketSort(float array[],int size){
    vector<vector<float>> bucket(size,vector <float> ());


    for(int i=0;i<size;i++){
        int index=array[i]*size;
        bucket[index].push_back(array[i]);
        
    }

    for(int i=0;i<bucket.size();i++){
       
         if(!bucket.empty()){

           sort(bucket[i].begin(),bucket[i].end());
         }

         
    }

    int k=0;
    for(int i=0;i<bucket.size();i++){
      
         for(int j=0;j<bucket[i].size();j++){
           array[k++]= bucket[i][j];

         }
    }
    

}

int main(){
    float array[]={0.13,0.45,0.12,0.75,0.63,0.89,0.36,0.85};
    int size=sizeof(array)/sizeof(array[0]);

    bucketSort(array,size);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }



    return 0;
}