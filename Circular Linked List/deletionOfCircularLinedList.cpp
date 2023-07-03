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

    void InsertAtLast(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
    }

    void DeleteAtFirst()

    {
        if (head == NULL)
        {
            return;
        }
        Node *tail = head;

        while (tail->next != head)
        {
            tail = tail->next;
        }

        Node *ExtraNode = head;
        head = head->next;
        tail->next = head;
    }
    void DeleteAtLast()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;

        while (temp->next->next != head)
        {
            temp = temp->next;
        }

        Node *Last = temp->next;
        temp->next = head;
        free(Last);
    }

    void DeleteAtKthPosition(int position)
    {
        Node *temp = head;
        int count = 1;

        if (position == 1)
        {
            DeleteAtFirst();
            return;
        }

        while (count != position - 1)
        {
            temp = temp->next;
        }

        Node *NodeToFree = temp->next;
        temp->next = temp->next->next;
        free(NodeToFree);
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
    l1.Display();
    l1.DeleteAtFirst();
    l1.Display();
    l1.DeleteAtLast();
    l1.Display();
    l1.DeleteAtKthPosition(2);
    l1.Display();

    return 0;
}