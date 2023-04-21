#include<iostream>
using namespace std;
#include<vector>
int main(){
   int size;

    vector <int> v(6);

    int number;
    for(int i=0;i<v.size();i++){
        cin>>v[i];
      


    }
    // int find;
    // cout<<"Enter the number to find occurances";

    // cin>>find;

    int intial=0;
    


    // for(int i=0;i<v.size();i++){

    //    if(intial<=v[i]){
    //     intial=v[i];
    //     if(i==v.size()-1){
    //         cout<<"Array is Sorted"<<endl;
    //     }
       
       
    //    }
    //    else{
    //     cout<<"Array Is Not Sorted"<<endl;
    //     break;
    //    }
    bool flag=true;

    for(int i=1;i<v.size();i++){

       if(!(v[i-1]<=v[i])){
        flag=false;
       

       }
      
    


    }

 
if(flag==false){
    cout<<"Not sorted";
}
else{
    cout<<"Sorted";
}


    
    



    return 0;
}