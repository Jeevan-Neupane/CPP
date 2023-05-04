#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

    vector <int> sortArray{2,3,4,1,9};

    sort(sortArray.begin(),sortArray.end());
   if(sortArray.empty()){
    cout<<"true"<<endl;
   }
   else{
    cout<<"false"<<endl;
   }


    for(int i=0;i<sortArray.size();i++){
        cout<<sortArray[i]<<endl;
    }
    



    return 0;
}