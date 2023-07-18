#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{

    set<string> invitationList;

    int n;
    cin >> n;

    while (n--)
    {
        string name;
        cin >> name;
        invitationList.insert(name);
    }

    for (auto name : invitationList)
    {
        cout << name << endl;
    }

    return 0;
}