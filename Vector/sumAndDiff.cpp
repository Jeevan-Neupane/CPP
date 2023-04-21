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
   int sum=0;
   for(int i=0;i<v.size();i++){
    if(v[i]%2==0){
        sum=sum+v[i];
    }
    else{
        sum=sum-v[i];
    }
   }
   
//    for(int i=0;i<v.size();i+=2){
//     sumEven=sumEven+v[i];



//    }
//    for(int i=1;i<v.size();i+=2){
//     sumOdd=sumOdd+v[i];



//    }

//    cout<<sumEven-sumOdd<<endl;
cout<<sum<<endl;


    
    



    return 0;
}