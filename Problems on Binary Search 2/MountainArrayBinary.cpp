#include <iostream>
using namespace std;

int binarySearch(int array[],int start,int end){

    int index=-1;

    while(start<=end){
        int mid=start+(end-start)/2;
        if((array[mid-1]<array[mid]) && (array[mid]>array[mid+1])){
           return mid;

        }
        else if(array[mid]>array[mid-1]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return index;

}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 3, 2, 0};

    int size = sizeof(array) / sizeof(array[0]);

    int index = -1;

    index=binarySearch(array,0,size-1);

    cout<<index<<endl;



    return 0;
}