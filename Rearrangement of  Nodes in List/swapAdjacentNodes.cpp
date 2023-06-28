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
Node *swapAdjacent(Node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *secondNode = head->next;
    head->next = swapAdjacent(secondNode->next);
    secondNode->next = head; // Revese the link between first two node
    return secondNode;
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

    listOne.DisplayList();

    listOne.head = swapAdjacent(listOne.head);
    listOne.DisplayList();

    return 0;
}