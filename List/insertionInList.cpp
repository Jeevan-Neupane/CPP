#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1{1, 2, 3, 4, 5};
    auto itr = l1.begin();
    advance(itr, 3);

    // l1.insert(itr, 5);
    // l1.insert(itr,3,5);'
    auto l=l1.begin();
    auto r=l1.begin();
    advance(r,3);

    l1.insert(itr,l,r);


    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }

    return 0;
}