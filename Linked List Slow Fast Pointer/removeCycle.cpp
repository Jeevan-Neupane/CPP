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

Node *cycleIsPresent(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *ptr1 = head;
    Node *ptr2 = head;

    while (ptr2 != NULL && ptr2->next != NULL)
    {

        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if (ptr1 == ptr2)
        {
            return ptr1;
        }
    }

    return NULL;
}

void removeCycle(Node *head)
{
    Node *slow = cycleIsPresent(head);
    Node *faster = head;

    while (faster->next != slow->next)
    {

        faster = faster->next;
        slow = slow->next;
    }
    slow->next = NULL;
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
    listOne.addElement(6);
    listOne.addElement(7);
    listOne.addElement(8);
    listOne.head->next->next->next->next->next = listOne.head->next->next;
    cout << cycleIsPresent(listOne.head)->data << endl;
    removeCycle(listOne.head);
    listOne.displayElement();
    cout << cycleIsPresent(listOne.head) << endl;
    return 0;
}