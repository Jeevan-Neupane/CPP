#include<iostream>
#include<string>
using namespace std;

int main(){
    int num=768;
    string str= to_string(num);
    str+="1";
    cout<<str[0]<<endl;



    return 0;
}