#include<iostream>
#include<vector>
using namespace std;

int main(){
    int x=20;
    int *ptr=&x;
    double y=4.5;
    double *ptrd=&y;
    cout<<"For Double"<<endl;
    cout<<sizeof(y)<<endl;
    cout<<ptrd<<endl<<(ptrd+1)<<endl;





    cout<<"for integer "<<endl;
    cout<<sizeof(x)<<endl;
    cout<<ptr<<endl<<(ptr+3);



    return 0;
}