//~We will design a stack using linked list

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

class Stack
{

    Node *head;
    int maximumCapacity;
    int size;

public:
    Stack(int capacity)
    {
        maximumCapacity = capacity;
        head = NULL;
        size = 0;
    }

    void push(int value)
    {
        Node *new_node = new Node(value);
        if (maximumCapacity == size)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        if (head == NULL)
        {
            head = new_node;
            size++;
            return;
        }
        new_node->next = head;
        head = new_node;
        size++;
    }

    void pop()
    {
        if (head == NULL)
        {
            cout << "stack UnderFlow" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        free(temp);
        size--;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

    bool isFull()
    {
        return size == maximumCapacity;
    }

    int getSize()
    {
        return size;
    }

    int getTop()
    {
        if (head == NULL)
        {
            cout << "Stack UnderFlow" << endl;
            return INT16_MIN;
        }
        return head->value;
    }
};

int main()
{
    Stack st(5);
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(25);
    st.push(30);
    st.pop();
    cout << st.getTop() << endl;

    return 0;
}