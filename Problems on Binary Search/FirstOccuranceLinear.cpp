#include<iostream>
using namespace std;

int main(){
    int array[]={2,5,5,5,6,6,8,9,9,9};
    int size=sizeof(array)/sizeof(array[0]);
    int targetEl=5;
    int firstOccurance=-1;

    for(int i=0;i<size;i++){
        if(targetEl==array[i]){
            firstOccurance=i;
            break;
        }
    }

    cout<<firstOccurance<<endl;
    



    return 0;
}