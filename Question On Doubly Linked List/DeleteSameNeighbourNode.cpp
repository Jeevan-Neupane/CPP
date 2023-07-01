#include <iostream>

using namespace std;

class Node
{
public:
    Node *prev;
    int value;
    Node *next;

    Node(int data)
    {
        prev = NULL;
        value = data;
        next = NULL;
    }
};

class DoublyLikedList
{

public:
    Node *head;
    Node *tail;

    DoublyLikedList()
    {
        head = NULL;
        tail = NULL;
    }

    void AddElementToFirst(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        Node *temp = head;
        head = new_node;
        head->next = temp;
        temp->prev = head;
    }

    void AddElementAtLast(int value)
    {
        Node *new_node = new Node(value);

        if (tail == NULL)
        {
            AddElementToFirst(value);
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void DisplayList()
    {
        Node *temp = head;
        cout << "NULL <--";

        while (temp != NULL)
        {
            cout << temp->value << "<-->";

            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

void DeleteTheNodeWithSameNeighbour(Node *head,Node *tail)
{
    Node *currentEl = tail->prev;

    while (currentEl!=head)
    {

        cout << currentEl->value << endl;
        Node *prevNeighbour = currentEl->prev;
        Node *nextNeighbour = currentEl->next;

        if (prevNeighbour->value == nextNeighbour->value)
        {
            prevNeighbour->next = nextNeighbour;
            nextNeighbour->prev = prevNeighbour;
            free(currentEl);
        }
        currentEl = prevNeighbour;
    }
}

main()
{
    DoublyLikedList listOne;
    listOne.AddElementAtLast(2);
    listOne.AddElementAtLast(1);
    listOne.AddElementAtLast(1);
    listOne.AddElementAtLast(2);
    listOne.AddElementAtLast(1);

    // listOne.AddElementAtLast(5);
    listOne.DisplayList();
    DeleteTheNodeWithSameNeighbour(listOne.head,listOne.tail);
    listOne.DisplayList();

    return 0;
}