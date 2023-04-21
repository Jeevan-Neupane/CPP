#include<iostream>
#include<vector>
using namespace std;


string deleteA(string name,int index,int length){
    if(index==length){
        return "";
    }
    string nth="";
    nth+=name[index];
   

   return (name[index]=='a'?"":nth)+deleteA(name,index+1,length);



}

int main(){
    string name="Jeevan Neupane";
    int length=name.length();
    string returned=deleteA(name,0,name.length());
    cout<<returned<<endl;
    



    return 0;
}