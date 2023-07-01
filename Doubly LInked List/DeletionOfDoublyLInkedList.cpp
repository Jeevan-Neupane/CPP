#include <iostream>

using namespace std;

class Node
{

public:
    int value;
    Node *prev;
    Node *next;

    Node(int data)
    {
        value = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void InsertAtStart(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL && tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        Node *temp = head;
        head = new_node;
        temp->prev = head;
        head->next = temp;
    }

    void InsertAtLast(int value)
    {

        if (tail == NULL)
        {
            InsertAtStart(value);
            return;
        }
        Node *new_node = new Node(value);
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }

    void AddAtKthPosition(int value, int k)
    {
        if (head == NULL)
        {
            InsertAtStart(value);
            return;
        }
        Node *new_node = new Node(value);
        Node *temp = head;
        int count = 1;
        while (count != k - 1 && temp != NULL)
        {
            temp = temp->next;
            count++;
        }

        new_node->next = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
        new_node->next->prev = new_node;
    }

    void DeletionOfFirst()
    {
        if (head == NULL)
        {
            return;
        }
        Node *temp = head;
        head = head->next;

        if (head == NULL) //~Assuming only one node
        {

            tail = NULL;
        }
        else
        {
            head->prev = NULL;
        }
        free(temp);
    }
    void DeletionAtLast()
    {
        if (tail == NULL)
        {
            return;
        }

        Node *temp = tail;
        if (tail->prev == NULL)
        {

            head = NULL;
        }
        else
        {
            tail->prev->next = NULL;
        }
        free(temp);
    }

    void DeletionAtKthPosition(int position)
    {

        if (head == NULL)
        {
            return;
        }

        int count = 1;
        Node *temp = head;

        while (count != position - 1)
        {
            temp = temp->next;
            count++;
        }
        Node *ToBeDeleted = temp->next;

        temp->next = temp->next->next;
        temp->next->prev = temp;
        free(ToBeDeleted);
    }

    void DisplayList()
    {
        Node *temp = head;
        cout << "NULL"
             << "<==>";
        while (temp != NULL)
        {
            cout << temp->value << "<==>";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main()
{
    DoublyLinkedList list1;
    list1.InsertAtLast(1);
    list1.InsertAtLast(2);
    list1.InsertAtLast(3);
    list1.InsertAtLast(4);
    list1.DisplayList();
    list1.DeletionAtKthPosition(3);
    list1.DisplayList();

    return 0;
}