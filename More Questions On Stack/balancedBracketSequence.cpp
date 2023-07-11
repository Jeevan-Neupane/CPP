#include<iostream>
#include<string>
using namespace std;

int main(){
    string bracket="(()(())())";


   int count=0;
    for(int i=0;i<bracket.length();i++){

        if(bracket[i]=='('){
            count++;

        }
        if(bracket[i]==')'){
            count--;
        }
        if(count<0){
            break;

        }
        


    }

    if(count==0){
        cout<<"balance"<<endl;
    }else{
        cout<<"not balance"<<endl;
    }



    return 0;
}