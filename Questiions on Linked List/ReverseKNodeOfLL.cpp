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

    void AddEl(int data)
    {
        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            return; //*This is very necessary to do
        }

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
Node *CompleteReverse(Node *&head)
{

    Node *prev = NULL;
    Node *current = head;

    while (current != NULL)
    {
        Node *next = current->next;

        current->next = prev;

        prev = current;
        current = next;
    }

    return prev;
}

Node *ReversalKL(Node *&head, int k)
{
    Node *prev = NULL;
    Node *current = head;

    int counter = 0;

    while (current != NULL && counter < k)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        counter++;
    }
    if (current != NULL)
    {

        Node *new_head = ReversalKL(current, k);
        head->next = new_head;
    }
    return prev;
}

int main()
{

    LinkedList list;
    list.AddEl(1);
    list.AddEl(2);
    list.AddEl(3);
    list.AddEl(4);
    list.AddEl(5);
    list.AddEl(6);
    list.DisplayList();
    list.head = CompleteReverse(list.head);
    list.DisplayList();
    // list.head = ReversalKL(list.head, 3);
    // list.DisplayList();

    return 0;
}