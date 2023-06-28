//*Can we reverse the link list with the help of recursion too

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

        while (current != NULL)
        {
            Node *Next = current->next;
            current->next = prev;
            prev = current;
            current = Next;
        }
        head = prev;
    }
};

Node *reverse(Node *prev, Node *&current)
{

    if (current == NULL)
    {

        return prev;
    }
    Node *Next = current->next;
    current->next = prev;
   
    reverse(current,Next);
}
Node* NewWayToReverse(Node *&head){


    if(head==NULL ||  head->next==NULL){
        return head;
    }

    Node *new_head=NewWayToReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return new_head;

}
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
    list.head = reverse(NULL, list.head);
    list.displayList();
    list.head=NewWayToReverse(list.head);
    list.displayList();

    return 0;
}