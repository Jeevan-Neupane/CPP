#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v(5,0);//!This means that size is 5 with all 0
    vector <int> v2{1,2,3,4};//!This means that size is 4 and 1,2,3,4 are inside of it.

    for(int ele:v){
        cout<<ele<<endl;
    }



    return 0;
}