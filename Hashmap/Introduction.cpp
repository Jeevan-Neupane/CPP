#include <iostream>
using namespace std;
#include <map>

int main()
{

    map<string, int, greater<string>> directory;
    directory["Jeevan"] = 97296;
    directory["Jeevan"] = 9797;
    directory["Albert"] = 4564;
    directory["Jhon"] = 4567;
    directory["Jenisha"] = 45843;

    // for (auto element : directory)
    // {
    //     cout << "Name-" << element.first << endl;
    //     cout << "Phone Number-" << element.second << endl;
    // }

    // for (auto element : directory)
    // {
    //     cout << "Name-" << element.first << endl;
    //     cout << "Phone Number-" << element.second << endl;
    // }
    map<string,int>::iterator itr; 
    for(itr=directory.begin();itr!=directory.end();itr++){
        cout<<itr->first<<"-"<<itr->second<<endl;


    }

    return 0;
}