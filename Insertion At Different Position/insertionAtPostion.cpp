#include <iostream>
#include <string>
using namespace std;

class Insert
{

public:
    int value;
    Insert *next;

    Insert(int data)
    {
        value = data;
        next = NULL;
    }
};

void insertAtFirst(Insert *&head, int value)
{
    Insert *data = new Insert(value);
    data->next = head;
    head = data;
}
void insertAtLast(Insert *&head, int value)
{
    Insert *data = new Insert(value);
    Insert *temp = head;
    while (temp->next != NULL)
    {
        temp=temp->next;
        
    }
    temp->next=data;
    data->next=NULL;//*This is not necessary since the node contain NULL by default
}

void insertAtPostion(Insert *&head,int value,int position){
    Insert *data=new Insert(value);
    Insert *temp=head;

    if(position==0){//&This is important to note that the postion 0 will hamper you
        insertAtFirst(head,value);
        return;

    }
    int count=0;
    while(count!=position-1){
        count++;
        temp=temp->next;

    }
   data->next=temp->next;
   temp->next=data;


}

void printList(Insert *head)
{
    Insert *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "-->";
        temp = temp->next;
    }
    cout << "NULL";
}

int main()
{
    Insert *head = NULL;
    insertAtFirst(head, 1);
    insertAtFirst(head, 2);
    insertAtFirst(head, 3);
    insertAtFirst(head, 4);
    insertAtFirst(head, 5);
    insertAtLast(head, 6);
    insertAtPostion(head,0,1);
    printList(head);

    return 0;
}