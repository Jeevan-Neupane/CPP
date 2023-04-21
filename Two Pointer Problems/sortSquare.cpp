#include<iostream>
#include<vector>
using namespace std;

void sortSquare(int array[]){
     for(int i=0;i<6;i++){
        for(int j=5;j>=i;j--){
            if((array[i]*array[i])>(array[j]*array[j])){
                swap(array[i],array[j]);
            }
        
     }
     }

     for(int i=0;i<6;i++){
        array[i]=array[i]*array[i];
     }




}

int main(){
    int array[]={-20,-10,-3,2,5,6};
    

    sortSquare(array);
  

  for(int ele:array){
    cout<<ele<<" ";
  }



    return 0;
}