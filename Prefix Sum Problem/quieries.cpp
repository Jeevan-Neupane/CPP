#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v{1,2,3,4,5};


    //To Calculate Its Prefix Sum

    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
    }


    for(int ele:v){
        cout<<ele<<endl;
    }
    int q,r;

    cin>>q>>r;
    int ans=v[r-1]-v[q-1];

    
    cout<<"Your Ans Is"<<ans<<endl;




    return 0;
}