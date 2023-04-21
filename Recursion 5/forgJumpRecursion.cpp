#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int MinimumSum(int array[],int len,int i){
    if(i==len-1){
        return 0;

    };
    if(i==len-2){
        return abs(array[len-1]-array[len-2]);
    };

    return min(abs(array[i]-array[i+1])+MinimumSum(array,len,i+1),abs(array[i]-array[i+2])+MinimumSum(array,len,i+2));


}

int main(){
    int arr[]={10,10};
    int len=sizeof(arr)/sizeof(arr[0]);


    int minimumSum=MinimumSum(arr,len,0);

    cout<<"The minimum sum is "<<minimumSum;


    return 0;
}