#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    int x;

private:
    int y;

protected:
    int z;
};
class childA:public Parent{
    //x is public
    //y is inaccessible
    //z is protected

};
class childB:private Parent{
    //x and z are private
    //y is inaccessible

};
class childC:protected Parent{
    //x and z are protected 
    //y is inaccessible

};
int main()
{


    return 0;
}