#include<iostream>
#include<vector>
using namespace std;

void f(string str,int i,string result,vector <string> &v,vector<string> &li){
    if(i==str.length()){
        li.push_back(result);
        return;
    }
    int digit=str[i]-'0';//*For ascii value subtraction and get exact digit in integer

    if(digit<=1){
        f(str,i+1,result,v,li);
        return;
    }
    for(int j=0;j<v[digit].size();j++){
        f(str,i+1,result+v[digit][j],v,li);
    }
    return;



}

int main(){
    string str="423";

    vector <string>v(10);
    vector <string> li;
    v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 
    f(str,0,"",v,li);

    for(int i=0;i<li.size();i++){
        cout<<li[i]<<endl;
    }
    





    return 0;
}