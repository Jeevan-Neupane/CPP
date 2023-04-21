
#include <iostream>
#include <vector>
using namespace std;


void rotate(int x[],int size,int rotate){
   int ans[5];
   int j=0;

     
      for(int i=size-rotate;i<size;i++){
        ans[j++]=x[i];


      
    }

    for(int i=0;i<=rotate;i++){
        ans[j++]=x[i];
    }
    for(int i=0;i<5;i++){
        cout<<ans[i]<<endl;
    }
  
  
}

int main()
{
    int x[] = {1,2,3,4,5};
  

    int rotateValue = 1;
    
    rotate(x,5,rotateValue);

   
    return 0;
}