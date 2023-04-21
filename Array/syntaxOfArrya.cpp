#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6};


    // cout<<sizeof(array)/sizeof(array[0])<<endl;
    int array2[4]={1,2,3,4};
    for(int i=0;i<(sizeof(array2)/sizeof(array2[0]));i++){
        cout<<array2[i]<<endl;

    }



    return 0;
}