//*This is written to turely reverse to linked list

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
    void AddElAtFirst(int value)
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

    void displayList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->value << "-->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void ReverseIt()
    {

        Node *prev = NULL;
        Node *current = head;

        while (current!= NULL)
        {
            Node *Next = current->next;
            current->next = prev;
            prev = current;
            current = Next;
        }
        head=prev;
      
    }
};

int main()
{
    LinkedList list;
    list.AddElAtFirst(1);
    list.AddElAtFirst(2);
    list.AddElAtFirst(3);
    list.AddElAtFirst(4);
    list.AddElAtFirst(5);
    list.AddElAtFirst(6);
    list.displayList();
    list.ReverseIt();
    list.displayList();

    return 0;
}