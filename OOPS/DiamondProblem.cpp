#include<iostream>
#include<string>
using namespace std;
class classA{
    public:
    classA(){
        cout<<"I am class A"<<endl;
    }
};
class classB:public classA{
    public:
    classB(){
        cout<<"I am class B"<<endl;
    }
};
class classC:public classA{
    public:
    classC(){
        cout<<"I am class C"<<endl;
    }
};

class classD:public classB,public classC{
    public:
    classD(){
        cout<<"I am class D"<<endl;
    }

};

int main(){
    classD d;
    



    return 0;
}