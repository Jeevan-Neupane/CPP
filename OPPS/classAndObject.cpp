#include<iostream>
#include<string>
using namespace std;

class Fruits{
    public:
    string name;
    string color;

};



int main(){
    Fruits mango;//*Object

    mango.name="mango";
    mango.color="yellow";

    Fruits *apple=new Fruits();
    apple->name="apple";
    apple->color="red";

    cout<<apple->name<<"-"<<apple->color<<endl;
   


    



    return 0;
}