#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    set<int> s;
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
    }

    auto itr = s.begin();
    itr++;
    cout<<"Second smallest number is " << *itr << endl;

    return 0;
}