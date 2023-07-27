#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;
    m.insert({1, 10});
    m.insert({3, 30});
    m[1] = 50;
    m[4] = 40;
    m.insert({1, 20});

    for (auto i : m)
    {
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}