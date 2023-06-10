#include <iostream>
#include <string>
using namespace std;

int main()
{
    string binaryNo = "10100000";
    int k = 2;

    int i = 0;
    int j = 0;
    int longest = 0;
    int zero = 0;

    while (j < binaryNo.size())
    {
        if (binaryNo[j] == '0')
        {
            zero++;
        }
        if (zero > k)
        {
            i++;
            zero--;
        }
        j++;
        longest=j-i;

    }
    cout<<longest<<endl;

    
    
    return 0;
}