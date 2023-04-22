#include<iostream>
#include<vector>
using namespace std;

bool presentOrAbsent(int array[],int len,int num,int i){
    if(len==i){
        return false;
    }
    if(num==array[i]){
        return true;
    }

    return presentOrAbsent(array,len,num,i+1);


}

int main(){

    int array[]={4,12,54,14,3,8,6,1};
    int num=54;

    int len=sizeof(array)/sizeof(array[0]);

    bool value=presentOrAbsent(array,len,num,0);

    if(value){
        cout<<"Yes present";
    }
    else{
        cout<<"Absent ";
    }


    



    return 0;
}