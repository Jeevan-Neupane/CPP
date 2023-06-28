//*We are going to merge multiple linked list
//*At first we will merge two and merge with it next linked list

//&Compare two linked list using two pointer approach

#include <iostream>
#include <vector>
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

Node *mergeSortNew(Node *head1, Node *head2)
{
    Node *new_head;
    Node *ptr1 = head1;
    Node *ptr2 = head2;
    Node *ptr3 = NULL;

    if (ptr1->data > ptr2->data)
    {
        ptr3 = ptr2;
        ptr2 = ptr2->next;
    }
    else
    {
        ptr3 = ptr1;
        ptr1 = ptr1->next;
    }
    new_head = ptr3;

    while (ptr1 && ptr2)
    {

        if (ptr1->data > ptr2->data)
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        else
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        ptr3 = ptr3->next;
    }

    if (ptr1)
    {
        ptr3->next = ptr1;
    }
    if (ptr2)
    {
        ptr3->next = ptr2;
    }
    return new_head;
}
Node *mergeKLinkedList(vector<Node *> &headVector)
{ //*This is the vector we received with heads of all linked list

    if (headVector.size() == 0)
    {
        return NULL;
    }
    while (headVector.size() > 1)
    {
        Node *new_head = mergeSortNew(headVector[0], headVector[1]);
        headVector.push_back(new_head);
        headVector.erase(headVector.begin());
        headVector.erase(headVector.begin());
    }

    return headVector[0];
}
int main()
{
    LinkedList listOne;
    LinkedList listTwo;
    LinkedList listThree;
    LinkedList listFour;
    LinkedList Merged;

    listOne.addElement(1);
    listOne.addElement(3);
    listOne.addElement(5);
    listTwo.addElement(2);
    listTwo.addElement(4);
    listFour.addElement(6);
    listFour.addElement(8);
    listFour.addElement(10);
    listThree.addElement(7);
    listThree.addElement(9);
    listOne.displayElement();
    listTwo.displayElement();
    listThree.displayElement();
    listFour.displayElement();
    vector<Node *> headVector{listOne.head, listTwo.head, listThree.head, listFour.head};

    Merged.head = mergeKLinkedList(headVector);
    Merged.displayElement();

    return 0;
}