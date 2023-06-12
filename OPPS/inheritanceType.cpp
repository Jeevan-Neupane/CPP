//*Single Inheritance
#include<iostream>
#include<string>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"I am parent constructor"<<endl;
    }
};
class Child:public Parent{
    public:
    Child(){
        cout<<"I am child constructor"<<endl;
    }
};

int main(){
    Child c;



    return 0;
}