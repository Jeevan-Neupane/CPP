#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arry[]={3,10,3,2,5};
    int max=INT16_MIN;

    for(int i=0;i<5;i++){
        if(arry[i]>max){
            max=arry[i];
        }

    }
    cout<<"Maximum Value in Array is "<<max<<endl;



    return 0;
}