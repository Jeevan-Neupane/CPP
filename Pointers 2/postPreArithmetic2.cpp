#include<iostream>
#include<vector>
using namespace std;

int main(){
    int array[]={1,5};

    int *ptr=&array[0];

    cout<<(*ptr)++<<endl;//*This will do the operation inside of bracket and move outside
    cout<<(*ptr)<<endl;//&No change of location

    cout<<*++ptr<<endl;




    return 0;
}