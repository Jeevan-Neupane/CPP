#include<iostream>
using namespace std;


void MergeSmallArrays(int arr[],int start,int midpoint,int last){
    int sizeofFirstArray=midpoint-start+1;
    int sizeofSecondArray=last-midpoint;

    int arrayOne[sizeofFirstArray],arrayTwo[sizeofSecondArray];

    for(int i=0;i<sizeofFirstArray;i++){
        arrayOne[i]=arr[start+i];
    }
    for(int i=0;i<sizeofSecondArray;i++){
        arrayTwo[i]=arr[midpoint+1+i];
    }

    int i=0;
    int j=0;
    int k=start;

    while(i<sizeofFirstArray && j<sizeofSecondArray){
        if(arrayOne[i]<arrayTwo[j]){
            arr[k++]=arrayOne[i++];
        }
        else{
            arr[k++]=arrayTwo[j++];
        }
    }

    while(i<sizeofFirstArray){
        arr[k++]=arrayOne[i++];
    }
    while(j<sizeofSecondArray){
        arr[k++]=arrayTwo[j++];
    }
    

}


void MergeSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }

    int midPoint=(end+start)/2;
    MergeSort(arr,start,midPoint);
    MergeSort(arr,midPoint+1,end);
    MergeSmallArrays(arr,start,midPoint,end); 

}

int main(){
    
    int arr[]={9, 2, 1, 7, 4,8,5};
    int size=sizeof(arr)/sizeof(arr[0]);


    MergeSort(arr,0,size-1);


    for(int i:arr){
        cout<<i<<endl;
    }





    return 0;
}