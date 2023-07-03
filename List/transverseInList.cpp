#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1{1, 2, 3, 4};

    //~Range Based Loop
    for (auto num : l1)
    {
        cout << num << endl;
    }

    //~Using Iterators
    for (auto itr = l1.begin(); itr != l1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    //~Using reverse Iterators
    for (auto itr = l1.rbegin(); itr != l1.rend(); itr++)
    {
        cout << *itr << " ";
    }

    return 0;
}