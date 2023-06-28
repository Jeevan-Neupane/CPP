//~L1-->L2-->L3-->L4-->NULL
//~L1-->L4-->L2-->L3-->NULL

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

void CombineLastAndFirst(Node *head)
{
    //~Find the mid point

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL) //*This is need to be asked
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    Node *prev = NULL;
    Node *current = slow;

    while (current)
    {
        Node *Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }
    Node *firstHalfHead = head;
    Node *secondHalfHead = prev;

    while (firstHalfHead != secondHalfHead)
    {
        Node *temp = firstHalfHead->next;
        firstHalfHead->next = secondHalfHead;
        firstHalfHead = secondHalfHead;
        secondHalfHead = temp;
    }
}

int main()
{

    LinkedList listOne;

    listOne.addElementAtLast(1);
    listOne.addElementAtLast(2);
    listOne.addElementAtLast(3);
    listOne.addElementAtLast(4);
    listOne.addElementAtLast(5);
  
    CombineLastAndFirst(listOne.head);
    listOne.DisplayList();

    return 0;
}