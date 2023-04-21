#include<iostream>
#include<vector>
using namespace std;

void findFirstAndLast(string s,char ch,int *first,int *last){
    for(int i=0;i<s.length();i++){
        if(ch==s[i]){
            *first =i;
            break;
        }
    }
    for(int i=s.length();i>0;i--){
        if(ch==s[i]){
            *last=i;
            break;
        }
    }

}

int main(){
    string s= "aabac";
    
    char ch='a';
    int first=-1;
    int last=-1;

    findFirstAndLast(s,ch,&first,&last);


    cout<<first<<endl<<last<<endl;





    return 0;
}