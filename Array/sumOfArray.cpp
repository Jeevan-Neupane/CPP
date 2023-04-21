#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    int sum=0;

    for(int index:array){
        sum=sum+index;
    }

    cout<<sum;



    return 0;
}