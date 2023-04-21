#include<iostream>
#include<vector>
using namespace std;

void arrayReceiver(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<endl;
        *(arr+i)+=1;
    }
  //*We are receiving the array's first position through pointer and can manipulate it


}

int main(){
    int array[5]={1,2,3,4,5};
    arrayReceiver(array,5);


    cout<<"I am out of function"<<endl;

    for(int i=0;i<5;i++){
        cout<<*(array+i)<<endl;
    }


    



    return 0;
}