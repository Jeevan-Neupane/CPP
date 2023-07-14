#include<iostream>
#include<string>
using namespace std;
class OperatorOverload{
    int x;
    int y;
    public:
    OperatorOverload(){
        x=0;
        y=0;
    }
    OperatorOverload(int a,int b){
        x=a;
        y=b;

    }
    void showData(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

    OperatorOverload operator-(OperatorOverload O){
        OperatorOverload temp;
        temp.x=x-O.x;
        temp.y=y-O.y;
        return temp;

    }

};

int main(){
    OperatorOverload o1(3,4);
    OperatorOverload o2(3,5);

    OperatorOverload o3;
    o3=o2-o1;
    o3.showData();




    return 0;
}