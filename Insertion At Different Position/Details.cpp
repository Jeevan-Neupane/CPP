#include<iostream>
#include<string>
using namespace std;

class Details{

    public:
    int value;
    Details *pointer;

    Details(int data){
        value=data;
        pointer=NULL;
    }

};

void InsertionAtFirst(Details *&head,int value){
    Details *data=new Details(value);
    data->pointer=head;
    head=data;

}

int main(){
    Details *head=NULL;//~This is just a pointer




    return 0;
}