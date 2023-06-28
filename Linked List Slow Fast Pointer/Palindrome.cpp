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

Node *midPoint(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

Node *ReverseFromMid(Node *head)
{
    Node *prev = midPoint(head);

    Node *current = prev->next;
    prev->next = NULL;

    while (current != NULL)
    {
        Node *Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
    }

    return prev;
}
bool CompareTwo(Node *head)
{
    Node *head1 = head;
    Node *head2 = ReverseFromMid(head);

    while (head2)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    return true;
}

int main()
{
    LinkedList listOne;
    LinkedList listTwo;
    listOne.addElement(1);
    listOne.addElement(2);
    listOne.addElement(3);

    listOne.addElement(2);
    listOne.addElement(1);
    bool value = CompareTwo(listOne.head);
    if (value)
    {
        cout << "This is palindrome " << endl;
    }
    else
    {
        cout << "This is not palindrome" << endl;
    }

    return 0;
}