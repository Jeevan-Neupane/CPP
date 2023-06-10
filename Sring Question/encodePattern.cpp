#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string password = "1[a2[b3[c]]]";

    string result = "";
    for (int i = 0; i < password.size(); i++)
    {
        if (password[i] != ']')
        {
            result += password[i];
        }
        else
        {
            string str = "";

            while (result.back() != '[' && !result.empty())
            {
                str += result.back();

                result.pop_back();
            }
            reverse(str.begin(), str.end());
            result.pop_back();
            string strnumber;
            while ((result.back() >= '0' && result.back() <= '9') && !result.empty())
            {
                strnumber.push_back(result.back());
                result.pop_back();
            }
            reverse(strnumber.begin(), strnumber.end());
            int intNum = stoi(strnumber);

            while (intNum)
            {
                result += str;
                intNum--;
            }
        }
    }
    cout << result << endl;

    return 0;
}