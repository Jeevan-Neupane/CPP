//*We will take the two pointer
//~Slow pointer and fast pointer are taken and one pointer will move twice the  speed of another
//~While one pointer is at the middle of the  list another will at last

#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
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
        Node *temp = head;
        head = new_node;
        new_node->next = temp;
    }

    void addElement(int value)
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

    void displayElement()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "--->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
bool cycleInLinkeList(Node *head)

{
    if (head == NULL)
    {
        return false;
    }
    Node *ptr1 = head; //*Slow
    Node *ptr2 = head; //*faster

    while (ptr2 != NULL && ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;

        if (ptr1 == ptr2)
        {
            cout<<ptr1->data<<endl;
            return true;
        }
    }

    return false;
}
int main()
{
    LinkedList listOne;
    LinkedList listTwo;
    listOne.addElement(1);
    listOne.addElement(2);
    listOne.addElement(3);
    listOne.addElement(4);
    listOne.addElement(5);
    listOne.head->next->next->next->next->next = listOne.head->next->next;

    bool value = cycleInLinkeList(listOne.head);
    if (value)
    {
        cout << "Yes it is cyclic" << endl;
    }
    else
    {
        cout << "No it is not cyclic" << endl;
    }

    return 0;
}