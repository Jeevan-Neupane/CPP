#include <iostream>

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

class CircularLinkedList
{
public:
    Node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

    void InsertAtFirst(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void InsertAtLast(int value)
    {
        if (head == NULL)
        {
            InsertAtFirst(value);
            return;
        }
        Node *new_node = new Node(value);
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
    }

    void InsertionAtK(int value, int position)
    {

        if (head == NULL)
        {
            return;
        }
        int count = 1;
        Node *new_node = new Node(value);
        Node *temp = head;

        while (count != position-1)
        {
            temp = temp->next;
            count++;
        }
        Node *Next = temp->next;
        temp->next = new_node;
        new_node->next = Next;
    }
    void Display()
    {
        Node *temp = head;

        do
        {
            cout << temp->value << "-->";
            temp = temp->next;

        } while (temp != head);
        cout << head->value << endl;
    };
};
int main()
{

    CircularLinkedList l1;
    l1.InsertAtLast(1);
    l1.InsertAtLast(2);
    l1.InsertAtLast(3);
    l1.InsertAtLast(4);
    l1.InsertAtLast(5);
    l1.InsertAtLast(6);
    l1.InsertionAtK(34, 2);
    l1.Display();

    return 0;
}