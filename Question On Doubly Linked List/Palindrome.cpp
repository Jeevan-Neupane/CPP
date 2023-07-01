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

bool PalindromeOrNot(Node *head, Node *tail)
{

    Node *start = head;
    Node *end = tail;
    int i = 0;

    while (start != end && end != start->prev)//*This extra conditioin is for even one  
    {
        if (start->value != end->value)
        {
            return false;
        }
        start = start->next;
        end = end->prev;
     
    }

    return true;
}

main()
{
    DoublyLikedList listOne;
    listOne.AddElementAtLast(1);
    listOne.AddElementAtLast(2);
    listOne.AddElementAtLast(3);
    listOne.AddElementAtLast(3);
    listOne.AddElementAtLast(2);

    listOne.AddElementAtLast(1);
    // listOne.AddElementAtLast(5);
    listOne.DisplayList();
    bool value = PalindromeOrNot(listOne.head, listOne.tail);
    if (value)
    {
        cout << "Yes it is Palindrome" << endl;
    }
    else
    {
        cout << "No that is not Palindrome" << endl;
    }

    return 0;
}