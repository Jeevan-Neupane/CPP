//&Compare two linked list using two pointer approach

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

//*Step-1 ==>Create the new function
void removeKthElementfromLast(Node *&head, int position)
{

    Node *ptr1 = head;
    Node *ptr2 = head;

    while (position--)
    {
        ptr2 = ptr2->next;
    }

    if (ptr2 == NULL)
    {
        //*This means that the value of k is equal to the length of linked list so The ptr1 is pointing to the first node;

        //~To delete first node
        Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }
    //*Since we need the node before which is to be deleted
    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    Node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
}

int main()
{
    LinkedList listOne;

    listOne.addElement(1);
    listOne.addElement(2);
    listOne.addElement(3);
    listOne.addElement(4);
    listOne.addElement(5);
    listOne.addElement(6);

    removeKthElementfromLast(listOne.head, 5);
    listOne.displayElement();
    removeKthElementfromLast(listOne.head, 5);
    listOne.displayElement();

    return 0;
}