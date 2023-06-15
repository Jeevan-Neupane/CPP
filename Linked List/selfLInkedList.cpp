#include <iostream>
#include <string>
using namespace std;

class LL
{

public:
    int value;
    LL *next;
    LL(int data)
    {
        value = data;
        next = NULL;
    }
};

void InsertionAtFirst(LL *&head,int value){
    LL *new_data=new LL(value);
    new_data->next=head;
    head=new_data;


}
void PrintLinkedList(LL *head){
    LL *pointer=head;
    while(pointer!=NULL){

        cout<<pointer->value<<"->";
        pointer=pointer->next;

        



    }

    cout<<"NULL"<<endl;
}

int main()
{
    LL *head=NULL; 
    InsertionAtFirst(head,5);
    InsertionAtFirst(head,5);
    InsertionAtFirst(head,5);
    InsertionAtFirst(head,5);
    PrintLinkedList(head);
    

    

    return 0;
}