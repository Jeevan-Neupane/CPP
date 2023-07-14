#include <iostream>
#include <string>
using namespace std;

class Rectangle
{

public:
    int length;
    int breadth;
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int x,int y){
        length=x;
        breadth=y;
    }
    Rectangle(Rectangle &r){
        length=r.length;
        breadth =r.breadth;

    }
};

int main()
{

    Rectangle r1;
    cout << r1.length<<endl;

    Rectangle r2(3,4);
    cout<<r2.length<<endl;

    Rectangle r3(r2);
    cout<<r3.length<<endl;


    return 0;
}