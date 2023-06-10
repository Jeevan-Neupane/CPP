#include <iostream>
#include <string>
#include <algorithm>

#include <vector>
using namespace std;

string CommonPart(vector<string> str)
{
    sort(str.begin(), str.end());
    int i = 0;
    int j = 0;

    string str1 = str[0];
    string str2 = str[str.size() - 1];
    string common = "";

    while (i <= str1.size() && j <= str2.size())
    {
        if (str1[i] == str2[i])
        {
            common += str1[i];
            i++;
            j++;
        }
        else
        {
            break;
        }
    }
    return common;
}

int main()
{

    vector<string> str{"ant", "anti", "anhem"};

    cout << "The most common part is " << CommonPart(str) << endl;

    return 0;
}