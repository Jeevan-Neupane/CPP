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

bool compareTwo(Node *head1, Node *head2)
{
    Node *temp1 = head1;
    Node *temp2 = head2;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(temp1==NULL && temp2==NULL){
        return true;
    }
    else{
        return false;
    }
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
    listTwo.addElement(1);
    listTwo.addElement(2);
    listTwo.addElement(3);
    listTwo.addElement(4);
    listTwo.addElement(5);
    listTwo.addElement(6);
    listTwo.displayElement();
    bool value=compareTwo(listOne.head,listTwo.head);
   
    if(value){
        cout<<"Yes both are equal"<<endl;
    }
    else{
        cout<<"No both are not equal"<<endl;
    }

    return 0;
}