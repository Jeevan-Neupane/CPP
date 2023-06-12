#include<iostream>
#include<string>
using namespace std;

class Parent {
    public:
    virtual void show(){
        cout<<"Parent show"<<endl;
    }
    void print(){
        cout<<"Parent print "<<endl;
    }
};

class childA:public Parent{
    public:
    void show(){
        cout<<"Child show"<<endl;
        
    }
    void print(){
        cout<<"Parent Print "<<endl;
    }
};

int main(){
    Parent *p=new Parent();

    childA c;
    p=&c;
    p->show();

   
    



    return 0;
}