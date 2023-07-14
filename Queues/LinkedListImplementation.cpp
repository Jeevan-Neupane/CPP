#include <iostream>
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

class Queue
{

    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void Enqueue(int data)
    {

        Node *new_node = new Node(data);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void Dequeue()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty" << endl;
            return;
        }

        else
        {
            Node *oldHead = head;
            Node *new_head = head->next;
            head = new_head;
            if (head == NULL)
            {
                tail == NULL;
            }
            oldHead->next = NULL;
            free(oldHead);

            size--;
        }
    }
    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    int getFront()
    {
        if (head == NULL)
        {
            cout << "No queue exist" << endl;
            return 0;
        }
        return head->value;
    }
};

int main()
{
    Queue que;
    que.Enqueue(20);
    que.Enqueue(30);
    que.Enqueue(40);

    while (!que.isEmpty())
    {
        cout << que.getFront() << endl;
        que.Dequeue();
    }
    return 0;
}