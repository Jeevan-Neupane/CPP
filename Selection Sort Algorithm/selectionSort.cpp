#include<iostream>
#include<vector>

using namespace std;

void SortedArray(vector <int> &num){

    for(int i=0;i<num.size()-1;i++){
        int minimumNumIndex=i;
        for(int j=1+i;j<num.size();j++){
            if(num[j]<num[minimumNumIndex]){
                minimumNumIndex=j;
            }
        }
        if(minimumNumIndex!=i){
            swap(num[minimumNumIndex],num[i]);
        }

    }



}

int main(){
    vector <int> num(5);

    cout<<"Enter the array you want "<<endl;
    for(int i=0;i<num.size();i++){
        cin>>num[i];
    }




   SortedArray(num);





    cout<<"*************************************************************************"<<endl;
    cout<<"Sorted Array is "<<endl;
    for(int i=0;i<num.size();i++){
        cout<<num[i]<<endl;
    }
    



    return 0;
}