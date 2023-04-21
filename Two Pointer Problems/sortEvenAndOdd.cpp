#include<iostream>
#include<vector>
using namespace std;

void sortByOddEven(vector<int> &v){
    for(int i=0;i<v.size();i++){
        for(int j=v.size()-1;j>=i;j--){
            if(v[i]%2!=0 && v[j]%2==0){
                int k=v[i];
                v[i]=v[j];
                v[j]=k;
            }
        }
    }
}

int main(){
    vector <int> v;
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;

    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortByOddEven(v);

    cout<<"The sorted array is"<<endl;

    for(int ele:v){
        cout<<ele<<" ";
    }



    return 0;
}