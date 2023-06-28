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

int calculateLength(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
Node * moveByK(Node *head, int position)
{
    int count = 0;

    Node *temp = head;

    while (temp != NULL && count != position)
    {
        temp = temp->next;
    }

    return temp;
}
Node * intesectLinkedList(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    //*Calculate the length of both linked Lists

    int l1 = calculateLength(head1);
    int l2 = calculateLength(head2);

    //*find the differenc k between the  linked list and move longer link list ptr by k
    if (l1 > l2)
    {//~linked list 1 is longer than two
        ptr1 =moveByK(head1,l1-l2);
        ptr2=head2;
    }
    else
    {//~linked list 2 is longer than two
        ptr2=moveByK(head2,l2-l1);
        ptr1=head1;
    }

    //*Compare the ptr1 and ptr2 nodes

    while(ptr1!=NULL){
        if(ptr1==ptr2){
            return ptr1;

        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
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
    listOne.displayElement();
    //
    listTwo.addElement(7);
    listTwo.addElement(8);
    listTwo.addElement(9);
    listTwo.head->next->next->next=listOne.head->next->next->next;
    listTwo.displayElement();

    Node *intesected=intesectLinkedList(listOne.head,listTwo.head);
    cout<<intesected->data<<endl;

    return 0;
}