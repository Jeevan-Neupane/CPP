#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> directory;
    directory.insert(make_pair("urvi", 4567));
    directory.insert(make_pair("Jeevan", 56789));

    directory.insert(make_pair("Jeevan", 4567));

    for (auto i : directory)
    {
        cout << i.first << endl;
        cout << i.second << endl;
    }

    return 0;
}