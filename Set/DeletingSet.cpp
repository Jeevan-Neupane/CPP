#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> set1;

    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);

    for (auto itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    //! Direct Deletion
    set1.erase(4);

    for (auto itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    set1.insert(4);

    //! using position
    auto itr = set1.begin();
    advance(itr, 3);

    set1.erase(itr);

    for (auto itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    set1.insert(4);
    set1.insert(5);
    //! using two pointer

    auto start=set1.begin();
    start++;

    auto end=set1.begin();
    advance(end,3);

    set1.erase(start,end);

    for (auto itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    return 0;
}