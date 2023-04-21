 


 #include<iostream>
 using namespace std;
 int apple=10;
 int sum(){
    int apple=15;
    cout<<apple;
    return 0;
 }
 
 int main(){
    int apple=20;

    cout<<apple<<endl; 
    cout<<::apple<<endl; //!scope resolution operator
     sum();
 
 
 
     return 0;
 }