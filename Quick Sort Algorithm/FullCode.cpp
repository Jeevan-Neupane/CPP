#include <iostream>
using namespace std;

int Partition(int array[],int start,int end){
    
    int i=start-1;
    for(int j=start;j<end;j++){
        if(array[j]<array[end]){
            i++;
            swap(array[i],array[j]);
        }

    }

   swap(array[i+1],array[end]);

   return i+1;
}

void quickSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int PartitionIndex=Partition(arr,start,end);
    quickSort(arr,start,PartitionIndex-1);
    quickSort(arr,PartitionIndex+1,end);

}

int main()
{
    int array[] = {18,12,30,16,35,20};
    int size = sizeof(array) / sizeof(array[0]);
    quickSort(array,0,size-1);

    


    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

  
    return 0;
}