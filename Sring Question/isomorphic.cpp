#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isIsomorphic(string s1, string s2)
{
    vector<int> V1(128, -1);
    vector<int> V2(128, -1);

    if (s1.size() != s2.size())
    {
        return false;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        if (V1[s1[i]] != V2[s2[i]])
        {
            return false;
        }
        V1[s1[i]] = i;
        V2[s2[i]] = i;
    }
    return true;
}

int main()
{
    string s1, s2;
    s1 = "egg";
    s2 = "add";
    bool value = isIsomorphic(s1, s2);
   

    if(value){
        cout<<"Yes these two are isomorphic"<<endl;

    }
    else{
        cout<<"No these are not isomorphic"<<endl;
    }

    return 0;
}