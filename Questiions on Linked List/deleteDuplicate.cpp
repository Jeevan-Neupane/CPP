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
    void insertAtLast(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void Display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void DeleteDuplicate()
    {
        Node *current_node = head;
        while (current_node != NULL)
        {
            while (current_node->next && current_node->value == current_node->next->value)
            {
                Node *temp = current_node->next;
                current_node->next = current_node->next->next;
                free(temp);
            }
            current_node = current_node->next;
        }
    }
    void DeleteDup()
    {
        Node *current_node = head;

        while (current_node != NULL)
        {
            while (current_node->next && current_node->value == current_node->next->value)
            {
                Node *temp = current_node->next;
                current_node->next = current_node->next->next;
                free(temp);
            }
            current_node = current_node->next;
        }
    }
};

int main()
{
    LinkedList list;
    list.insertAtLast(1);
    list.insertAtLast(2);
    list.insertAtLast(2);
    list.insertAtLast(3);
    list.insertAtLast(3);
    list.insertAtLast(3);
    list.insertAtLast(3);
    list.insertAtLast(3);


    list.insertAtLast(3);
    list.insertAtLast(5);
    list.insertAtLast(5);

    list.Display();

    list.DeleteDup();
    list.Display();

    return 0;
}