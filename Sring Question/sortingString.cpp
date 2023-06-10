#include <iostream>
#include <string>
#include <vector>
using namespace std;

string countSort(string str)
{
    vector<int> V(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        int index = str[i] - 'a';
        V[index]++;
    }
    int j=0;
    for(int i=0;i<V.size();i++){

        while(V[i]--){
            str[j++]=i+'a';
        }
    }
    return str;
    
}

int main()
{
    string str = "qwertyuiopasdfghjklzxcvbnm";

    string sorted = countSort(str);
    cout << sorted << endl;

    return 0;
}