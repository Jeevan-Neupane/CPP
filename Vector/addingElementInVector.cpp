#include<iostream>
#include<vector>
using namespace std;

int main(){
    
   vector <int> v;
   v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
   v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
   v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
   v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
   v.push_back(4);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    

    v.clear();
    v.resize(8);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;



    return 0;
}