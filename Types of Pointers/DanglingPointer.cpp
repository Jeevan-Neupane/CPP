#include<iostream>
#include<vector>
using namespace std;

int main(){
    int *ptr=NULL;

    {
        int x=10;
        ptr=&x;
        cout<<ptr<<endl;
    }
   cout<<*ptr+1;//*This example is not good and not perfect so need to find the new one



    return 0;
}