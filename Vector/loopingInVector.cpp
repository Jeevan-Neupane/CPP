#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    int a;
     
     for(int i=0;i<5;i++){
        cin>>a;
        v.push_back(a);
     }
     v.insert(v.begin()+1,6);
     v.erase(v.end()-2);

     cout<<"You have Entered"<<endl;

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
     }

   
    cout<<"Through the For Each Loop"<<endl;

    for(int ele:v){
        cout<<ele<<endl;
    }



    return 0;
}