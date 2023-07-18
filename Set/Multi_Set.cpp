#include <iostream>
#include <set>
using namespace std;

int main()
{

    multiset<int> ms;

    ms.insert(3);
    ms.insert(3);
    ms.insert(1);
    ms.insert(2);

    for (auto i : ms)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}