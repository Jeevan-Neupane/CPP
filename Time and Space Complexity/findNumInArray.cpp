#include<iostream>
#include<vector>
using namespace std;

int main(){
    int array[]={5,6,1,3,8,10,2};
    int size;
    int num;
    cout<<"Enter the number you want to search for"<<endl;
    cin>>num;
    size=sizeof(array)/sizeof(array[0]);
    int index=-1;
    cout<<"The size of array is "<<size<<endl;
    for(int i=0;i<size;i++){
        if(array[i]==num){
            index=i;
            break;
        }
     
    }

            cout<<"The index of the entered number is "<<index<<endl;


    return 0;
}