#include<iostream>
using namespace std;

int main(){
    int array[]={170,45,75,90,502,2};
    int size=sizeof(array)/sizeof(array[0]);

    int maxEl=INT16_MIN;

    for(int i=0;i<size;i++){
        if(maxEl<array[i]){
           maxEl= max(maxEl,array[i]);
        }
    }

    cout<<maxEl<<endl;





    return 0;
}