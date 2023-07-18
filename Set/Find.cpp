#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5); 

    if (s.find(4) != s.end())
    {
        cout << "Four is present in the set" << endl;
    }else{
        cout<<"Absent"<<endl;
    }

    return 0;
}