#include <iostream>
using namespace std;

int CorrectPosition(int array[],int intialPosition,int finalPosition)
{
    int pivotEl=array[finalPosition];
    int intial=intialPosition-1;

    for(int i=intialPosition;i<finalPosition-1;i++){
        if(pivotEl>array[i]){
            intial++;
            swap(array[intial],array[i]);
        }

        swap(array[intial+1],array[finalPosition]);
    }


    return intial+1;





}

void QuickSort(int array[], int size, int intialPosition, int FinalPosition)
{
    if (intialPosition >= FinalPosition)
    {
        return;
    }
    int correctPosition=CorrectPosition(array,intialPosition ,FinalPosition);
    QuickSort(array,size,intialPosition,correctPosition-1);
    QuickSort(array,size,correctPosition+1,FinalPosition);
}

int main()
{
    int array[] = {3, 5, 2, 1, 4, 7, 8, 6};

    int size = sizeof(array) / sizeof(array[0]);
    

    QuickSort(array,size,0,size-1);

    for(int i=0;i<size;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}