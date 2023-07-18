#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 1, 2, 3, 3, 3};
    vector<int> v2 = {5, 6, 1, 2, 3, 6};

    set<int> s;

    for (int i = 0; i < v1.size(); i++)
    {
        s.insert(v1[i]);
    }
    int sumOfCommon = 0;

    for (int i = 0; i < v1.size(); i++)
    {

        if (s.count(v2[i]))
        {
            sumOfCommon += v2[i];
        }
    }

    cout << sumOfCommon << endl;

    return 0;
}