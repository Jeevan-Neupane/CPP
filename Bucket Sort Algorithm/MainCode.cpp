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

    for(int i=0;i<size;i++){
        if(!bucket[i]){

        }
    }
    

}

int main(){
    float array[]={0.13,0.45,0.12,0.89,0.75,0.63,0.89,0.39};
    int size=sizeof(array)/sizeof(array[0]);

    bucketSort(array,size);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }


    return 0;
}