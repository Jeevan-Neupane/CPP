#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<int, int> m;

    vector<int> v{1,2,3,3,4,5,5};
    for (int i = 0; i < v.size(); i++)
    {
        m[v[i]]++;
    }

    for (auto i : m)
    {
        cout << i.first << "-" << i.second << endl;
    }

    int sum = 0;
    for (auto i : m)
    {
        if (i.second > 1)
        {
            sum += i.first;
        }
    }
    cout<<sum<<endl;

    return 0;
}