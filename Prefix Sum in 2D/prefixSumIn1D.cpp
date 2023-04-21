#include<iostream>
#include<vector>
using namespace std;

void prefix(vector <int> &Vec){
    for(int i=1;i<Vec.size();i++){
        Vec[i]=Vec[i]+Vec[i-1];

    }
}

int main(){
    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    vector <int> Vec(n);
    for(int i=0;i<n;i++){
        cin>>Vec[i];

    }

    prefix(Vec);
    for(int i=0;i<n;i++){
        cout<<Vec[i]<<" ";

    }
    return 0;
}