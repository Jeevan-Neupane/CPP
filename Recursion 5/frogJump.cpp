#include<iostream>
#include<vector>
#include<math.h>
#include <cstdlib>
using namespace std;

int main(){
    int a[]={10,20,20,20};

    int position=a[0];
    int cost=0;
    int j=0;


    while(j+2<5){
      
       
        
        if(abs(a[j]-a[j+1])>=abs(a[j]-a[j+2])){
            position=a[j+2];
            cost+=abs(a[j]-a[j+2]);
            j=j+2;
           
            

        }
        else{
            position=a[j+1];
            cost+=abs(a[j]-a[j+1]);
            j=j+1;
        
           
        }
        
       
    }

 

    cout<<position<<endl;
    cout<<cost<<endl;




    return 0;
}