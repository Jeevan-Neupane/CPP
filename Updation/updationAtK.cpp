#include <iostream>
#include <string>
using namespace std;

class LinkList
{
public:
    int value;
    LinkList *next;

    LinkList(int data)
    {
        value = data;
        next=NULL;
    }
};

void AddElementAtFirst(LinkList *&head, int data)
{
    LinkList *node = new LinkList(data);
    head = node;
    return;
}

void AddElement(LinkList *&head, int data)
{
    LinkList *temp = head;
    if (head == NULL)
    {
        AddElementAtFirst(head, data);
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        LinkList *node = new LinkList(data);
        temp->next = node;
    }
}

void PrintLinkList(LinkList *head)
{
    LinkList *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void UpdationAtKthPostion(LinkList *head,int position,int value){
    LinkList *temp=head;
    int count=1;
    while(count!=position){
        temp=temp->next;
        count++;
    }
    temp->value=value;
}
int main()
{
    LinkList *head = NULL;
    AddElement(head, 1);
    AddElement(head, 7);
    AddElement(head, 3);
    AddElement(head, 4);
    AddElement(head, 5);
    UpdationAtKthPostion(head,5,2);
    PrintLinkList(head);

    return 0;
}