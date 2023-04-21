#include<iostream>
using namespace std;
int add(int p,int q=1,int r=2){

    return p+q+r;
}
int main(){
    int p=2;
    
   int c= add(p);
   cout<<c<<endl;
   int d=add(p,3);
   cout<<d<<endl;
   int e=add(p,2,3);

   
   cout<<e<<endl;

    



    return 0;
}