#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{

    unordered_map<int, string> um;
    um.insert(make_pair(-1, "jeevan"));
    um[2] = "balli";
    um[0] = "adadhaydesh";

    for (auto pair : um)
    {
        cout << pair.first << "-" << pair.second << endl;
    }

    return 0;
}