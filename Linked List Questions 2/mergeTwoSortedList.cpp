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
    new_head=ptr3;

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

    if(ptr1){
        ptr3->next=ptr1;
        
    }
    if(ptr2){
        ptr3->next=ptr2;
    }
    return new_head;
}
Node *mergeSort(Node *head1, Node *head2)
{
    Node *new_head;

    if (head1->data > head2->data)
    {
        new_head = head2;
        head2 = head2->next;
    }
    else
    {
        new_head = head1;
        head1 = head1->next;
    }
    Node *newHead = new_head;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->next->data > head2->data)
        {
            new_head->next = head2;
            head2 = head2->next;
            new_head = new_head->next;
        }
        else
        {
            new_head->next = head1;
            head1 = head1->next;
            new_head = new_head->next;
        }
    }

    while (head1 != NULL)
    {
        new_head->next = head1;
        head1 = head1->next;
        new_head = new_head->next;
    }
    while (head2 != NULL)
    {
        new_head->next = head2;
        head2 = head2->next;
        new_head = new_head->next;
    }

    return newHead;
}

int main()
{
    LinkedList listOne;
    LinkedList listTwo;
    LinkedList list3;

    listOne.addElement(1);

    listOne.addElement(3);

    listOne.addElement(5);

    listTwo.addElement(2);
    listTwo.addElement(4);

    listOne.displayElement();
    listTwo.displayElement();

    list3.head = mergeSortNew(listOne.head, listTwo.head);
    list3.displayElement();

    return 0;
}