#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
  

    for(int j=0;j<5;j++){
       
        v.push_back(j);

    }
    
    v.push_back(2);
   
    int input;
    cin>>input;
    
 

   int position=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==input){
           position=i;
           break;
        }
       
    }
    
    cout<<position<<endl;

    


    



    return 0;
}