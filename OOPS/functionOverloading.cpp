#include<iostream>
#include<string>
using namespace std;

class Sum{
    public:
     void add(int x,int y){
        int sum=x+y;
        cout<<"Two Parameters"<<sum<<endl;
     }
     void add(float x,float y){
        float sum=x+y;
        cout<<"Float Parameters"<<sum<<endl;
     }
     void add(int x,int y,int z){
        int sum=x+y+z;
        cout<<"Three Parameters"<<sum<<endl;
     }
};

int main(){

    Sum s;

    s.add(2,3);
    s.add(2,3,4);
    s.add(float(2.3),float(4.5));
    



    return 0;
}