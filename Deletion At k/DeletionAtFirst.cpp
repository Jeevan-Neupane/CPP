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
        next = NULL;
    }
};

void AddElementAtFirst(LinkList *&head, int data)
{

    LinkList *node = new LinkList(data);
    node->next=head;
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

void DeleteNodeAtFirst(LinkList *&head){
    LinkList *temp=head;
    head=head->next;
    free(temp);
}


int main()
{
      LinkList *head = NULL;
    AddElement(head, 1);
    AddElement(head, 2);
    AddElement(head, 3);
    AddElement(head, 4);
    AddElement(head, 5);
    AddElementAtFirst(head,0);
    PrintLinkList(head);
    DeleteNodeAtFirst(head);
    PrintLinkList(head);

    return 0;
}