#include<iostream>
#include<vector>
using namespace std;

int main(){

    //5
    //sum=5
    //a[0]=5
    //5+4=9
    //sum=9
    //a[1]=9
    //
    int array[]={5,4,1,2,3};
    int size=sizeof(array)/sizeof(array[0]);
 
    int sum=0;
    for(int i=0;i<size;i++){
      
        for(int j=i;j<=i;j++){
            sum=sum+array[j];
            array[i]=sum;
            break;
        }
    }

for(int ele:array){
    cout<<ele<<endl;
}


    return 0;
}