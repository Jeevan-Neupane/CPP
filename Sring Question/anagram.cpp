#include<iostream>
#include<string>
using namespace std;

string CountSort(string s){
    int temp[26]={};


    for(int i=0;i<s.size();i++){
       int value=s[i]-'a';
       temp[value]++;
       
    }
     

     int j=0;

    for(int i=0;i<26;i++){

        while(temp[i]--){
            s[j++]=i+'a';

            
        }

    }
    return s;

}

int main(){
    string s="angram";
    string t="nagaram";
   
   //*To be anangram the string must be formed from each other with the same  number of letter

   //*So the sort of the string must be same

   string sortS=CountSort(s);
   string sortT=CountSort(t);

   if(sortS==sortT){
    cout<<"The string are same"<<endl;
   }
   else{
    cout<<"The string are not same"<<endl;
   }





    return 0;
}