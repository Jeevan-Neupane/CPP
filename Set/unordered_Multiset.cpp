#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_multiset<int> ums;
    ums.insert(8);
    ums.insert(1);
    ums.insert(4);
    ums.insert(2);
    ums.insert(1);
    for (auto i : ums)
    {
        cout << i << endl;
    }

    return 0;
}