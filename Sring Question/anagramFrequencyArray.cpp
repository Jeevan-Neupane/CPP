#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "anaram";
    string t = "nagaram";

    //*To be anangram the string must be formed from each other with the same  number of letter

    //*So the reverse of the string must be same

    //*creating frequency array

    int temp[26] = {};

    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a';
        temp[index]++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        int index = t[i] - 'a';
        temp[index]--;
    }
    if(s.size()!=t.size()){
        cout<<"Not anagram"<<endl;
        return 0;
    }

    for(int i=0;i<26;i++){
        if(temp[i]!=0){
            cout<<"The word are not anagram"<<endl;
            return 0;
        }
    }
    cout<<"The word are anagram"<<endl;


    return 0;
}