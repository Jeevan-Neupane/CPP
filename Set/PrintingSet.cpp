#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> set1;
    set<int, greater<int>> set2;

    set1.insert(3);
    set1.insert(2);
    set1.insert(1);
    set1.insert(4);

    set2.insert(1);
    set2.insert(2);
    set2.insert(3);
    set2.insert(4);

    set<int>::iterator itr;

    for (itr = set1.begin(); itr != set1.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    for (itr = set2.begin(); itr != set2.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    //~using  for each loop

    for (auto value : set1)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}