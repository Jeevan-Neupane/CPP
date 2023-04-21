#include<iostream>
using namespace std;
#include<vector>
int main(){
   int size;

    vector <int> v(5);

    int number;
    for(int i=0;i<5;i++){
        cin>>v[i];
      


    }
    int find;
    cout<<"Enter the number to find occurances";

    cin>>find;

    int occurances=0;
    


    for(int i=0;i<v.size();i++){

       if(find==v[i]){
        occurances++;
       }


    }

    cout<<occurances<<endl;



    
    



    return 0;
}