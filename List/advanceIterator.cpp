#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1{1, 2, 3, 4};
    auto ptr = l1.begin();

    cout << *ptr << endl;

    advance(ptr, 2);
    cout << *ptr << endl;

    return 0;
}