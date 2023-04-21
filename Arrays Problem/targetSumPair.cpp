#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x[] = {1,6,3,4,7,5,2};
    int target;
    cout<<"Enter the target sum"<<endl;
    cin>>target;

    int counter=0;


    for(int i=0;i<(sizeof(x)/sizeof(x[0]));i++){
            for(int j=i+1;j<(sizeof(x)/sizeof(x[0]));j++){
                if(x[i]+x[j]==target){
                    counter++;

                }
            }

    }
    cout<<"The number of pair is "<<counter<<endl;




    return 0;
}