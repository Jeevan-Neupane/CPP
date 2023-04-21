#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;


string removeA(string name,int index,int len){

    //&Base Case 
    if(index==len){
        return "";
    }
    string current="";
    current+=name[index];
    //*This all is just done to make a name[i] to string otherwise it is character which is not expandable
    

    return (name[index]=='a'?"":current)+removeA(name,index+1,len);



}

int main(){
    string nameString="abcax";
 
    
    
  

    // cout<<typeid(name[0]).name()<<endl;
    // cout<<typeid(nameString).name()<<endl;
    string returned=removeA(nameString,0,nameString.length());
    cout<<returned<<endl;


    



    return 0;
}