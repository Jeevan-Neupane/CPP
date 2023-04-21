#include<iostream>
using namespace std;


int main(){
    
   int array[]={1,2,3,4,5,6};
   int number;

  cout<<"Enter the number which you want to search"<<endl;
  cin>>number;

    
     for(int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
        cout<<array[i]<<endl;
        if(number==array[i]){
          cout<<i<<endl;
          break;
        }
    
     }

 




    return 0;
}