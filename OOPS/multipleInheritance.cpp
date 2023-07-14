#include <iostream>
#include <string>
using namespace std;
class Parent1
{
public:
    Parent1()
    {
        cout << "I am parent1 constructor" << endl;
    }
};
class Parent2
{
public:
    Parent2()
    {
        cout << "I am parent2 constructor" << endl;
    }
};
class Child : public Parent1,public Parent2
{
public:
    Child()
    {
        cout << "I am child constructor" << endl;
    }
};

int main()
{
    Child c;

    return 0;
}