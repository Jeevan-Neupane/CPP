#include<iostream>
using namespace std;

int main(){
    int i=0;

    while (i<=50)
    {
        i++;
        if(i%3==0){
            continue;
        }
   
            cout<<i<<endl;
       
    }
    



    return 0;
}