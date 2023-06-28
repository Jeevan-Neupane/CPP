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
void DisplayList(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << "-->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void groupLinkedListByOddAndEven(Node *head)
{

    if(!head){
       return;
    }

    Node *oddHead = head;
    Node *evenHead = head->next;

    Node *oddTemp = oddHead->next->next;
    Node *evenTemp = evenHead->next->next;
    oddHead->next = oddTemp;
    evenHead->next = evenTemp;

    while (evenTemp != NULL && evenTemp->next != NULL)
    {

        oddTemp->next = oddTemp->next->next;
        evenTemp->next = evenTemp->next->next;
        evenTemp = evenTemp->next;

        oddTemp = oddTemp->next;
    }
    oddTemp->next = evenHead;
    DisplayList(oddHead);
}
int main()
{

    LinkedList listOne;

    listOne.addElementAtLast(1);
    listOne.addElementAtLast(2);
    listOne.addElementAtLast(3);
    listOne.addElementAtLast(4); 
    listOne.addElementAtLast(5);

    groupLinkedListByOddAndEven(listOne.head);

    return 0;
}