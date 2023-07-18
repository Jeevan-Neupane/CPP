#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s1;

    s1.insert(3);
    s1.insert(1);
    s1.insert(2);
    s1.insert(1);

    for(auto i:s1){
        cout<<i<<" ";
    }



    return 0;
}