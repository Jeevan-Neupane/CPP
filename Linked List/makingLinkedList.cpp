#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int value)
    {
        val = value;
        next = NULL;
    }
};

void InsertAtFirst(Node *&head, int val)
{
    // cout<<head<<endl;
    Node *new_node = new Node(val);
    new_node->next = head;

    head = new_node;
  
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "--->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;


    InsertAtFirst(head, 3);
    

    cout<<head<<endl;
    InsertAtFirst(head, 4);
    cout<<head->next<<endl;
    display(head->next);

    return 0;
}