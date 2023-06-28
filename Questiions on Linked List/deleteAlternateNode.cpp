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
    void DeleteAlternateNode()
    {
        Node *current_node = head;

        while (current_node != NULL && current_node->next != NULL)
        {
            Node *temp = current_node->next;
            current_node->next = temp->next;
            current_node = temp->next;
            free(temp);
        }
    }
};
int main()
{
    LinkedList list;
    list.insertAtLast(1);
    list.insertAtLast(2);
    list.insertAtLast(3);
    list.insertAtLast(4);
    list.insertAtLast(5);
    list.insertAtLast(6);
    list.insertAtLast(7);
    list.insertAtLast(8);
    list.insertAtLast(9);
    list.insertAtLast(10);

    list.DeleteAlternateNode();

    list.Display();

    return 0;
}