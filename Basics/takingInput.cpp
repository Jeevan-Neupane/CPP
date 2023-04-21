#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    // int noOfApple;
    // cin>>noOfApple;
    // cout<<"The no of apple is:"<<noOfApple;
    cout<<"Enter the value of a\n";
    cin>>a;
    cout<<"Enter the value of b\n";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"The value of a after swap"<<" "<< a<<" \nThe value of b after swap is"<< " "<<b;
    
    
 

    return 0;
}