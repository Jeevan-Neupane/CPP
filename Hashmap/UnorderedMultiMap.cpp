#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_multimap<string, int> furits;

    furits.insert(make_pair("apple", 5));
    furits.insert(make_pair("banana", 5));
    furits.insert(make_pair("banana", 10));
    furits.insert(make_pair("mango", 5));
    furits.insert(make_pair("lemon", 5));

    for (auto i : furits)
    {
        cout << i.first << " - " << i.second << endl;
    }

    return 0;
}