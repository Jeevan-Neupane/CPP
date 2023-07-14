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

class GrandChild:public Child{
    public:
    GrandChild(){
        cout<<"I am grand child constructor"<<endl;
    }
};

int main(){
    GrandChild c;



    return 0;
}