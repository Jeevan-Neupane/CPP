#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l{1, 2, 3, 4, 5};
    auto ptr = l.begin();
    l.erase(ptr);

    auto start = l.begin();
    auto end = l.begin();
    advance(end, 2);
    l.erase(start, end); 
    for (auto ptr1 = l.begin(); ptr1 != l.end(); ptr1++)
    {
        cout << *ptr1 << " ";
    }

    return 0;
}