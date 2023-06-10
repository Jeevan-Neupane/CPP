#include <iostream>
#include <string>
#include<vector>
using namespace std;

string CommonPart(vector <string> str){
    string fixed=str[0];
    int common=fixed.length();

    
    for(int i=0;i<str.size();i++){
        int j=0;
        while(j<=fixed.size() && j<=str[i].size() && fixed[j]==str[i][j] ){
            j++;

        }
        common=min(common,j);

    }

    return fixed.substr(0,common);

}

int main()
{

    vector<string> str{"ant", "anti", "anhem"};

    cout << "The most common part is " << CommonPart(str) << endl;

    return 0;
}