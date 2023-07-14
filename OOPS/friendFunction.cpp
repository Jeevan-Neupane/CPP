#include<iostream>
#include<string>
using namespace std;

class A{
    int x;

    public:
     A(int a){
        x=a;
    }

   friend void print(A &obj);

};

void print(A &obj){
    cout<<obj.x<<endl;
}



int main(){
    A a(5);
    print(a);
    



    return 0;
}