#include<iostream>
#include<string>
using namespace std;

class ABC{
    int x;

    public:
    void setData(int n){
        x=n;

    }
    int get(){
        return x;
    }
};

int main(){
    ABC obj1;
    obj1.setData(3);
    cout<<obj1.get()<<endl;
    



    return 0;
}