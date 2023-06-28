#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int data)
    {
        value = data;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }
    void addElementAtFirst(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        head = new_node;
        head->next = temp;
    }
    void addElementAtLast(int value)
    {
        if (head == NULL)
        {
            addElementAtFirst(value);
            return;
        }
        Node *new_node = new Node(value);
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void DisplayList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->value << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node * rotateListByK(Node *head, int k)
{

    int n = 0;

    Node *tail = head;

    while (tail->next != NULL)
    {
        n++;
        tail = tail->next;
    }

    n++; //*Since we want to reach the last node not the null and also wants to find the length
    k=k%n;
    if(k==0){
        return head;
    }
    tail->next=head;
    Node *temp=head;

    for(int i=1;i<n-k;i++){
        temp=temp->next;
    }

    Node *new_head=temp->next;
     temp->next=NULL;
     return new_head;
    
}

int main()
{

    LinkedList listOne;

    listOne.addElementAtLast(1);
    listOne.addElementAtLast(2);
    listOne.addElementAtLast(3);
    listOne.addElementAtLast(4);
    listOne.addElementAtLast(5);
    listOne.addElementAtLast(6);
    listOne.head=rotateListByK(listOne.head,3);
    listOne.DisplayList();

    return 0;
}