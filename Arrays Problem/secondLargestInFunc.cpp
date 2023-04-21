
#include <iostream>
#include <vector>
using namespace std;

int indexOfLargest(int x[],int size){
    int maxIndex=-1;
     int Largest = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
       if(Largest<x[i]){
        
         maxIndex=i;
      
       }
    }
   

    return maxIndex;

}

int secondLargest(int x[],int size){
    
    int secondLargest=INT16_MIN;
 
 for (int i = 0; i < size; i++)
    {
       if(secondLargest<x[i]){
         secondLargest=x[i];
      
       }
    }

return secondLargest;
}

int main()
{
    int x[] = {1,2,3,4,5,6,6,6,7};
    int size=sizeof(x)/sizeof(x[0]);

    int index=indexOfLargest(x,size);
    cout<<index<<endl;
    for(int i=0;i<size;i++){
        if(x[index]==x[i]){
            x[i]=INT16_MIN;
        }
    }
    int secondLarge=secondLargest(x,size);
    cout<<"Second Largest Is "<<secondLarge;
  

   
    

    


 


    // for (int i = 0; i < (sizeof(x) / sizeof(x[0])); i++)
    // {
    //     if (x[i] > 0)
    //     {
    //         unique = x[i];
    //     }
    // }

   

    return 0;
}