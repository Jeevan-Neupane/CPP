#include <iostream>

using namespace std;

class Stack
{
private:
    int capacity;
    int *arr;
    int top;

public:
    Stack(int capacityOfStack)
    {
        capacity = capacityOfStack;
        arr = new int[capacity];
        top = -1;
    }

    void push(int data)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Over Flow" << endl;
            return;
        }
        top++;
        arr[top] = data;
    }

    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return INT16_MIN;
        }
        top--;
    }

    int topEl()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return INT16_MIN;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    int size()
    {
        return top + 1;
    }
    bool isFull()
    {
        return top == capacity - 1;
    }
};

int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.push(6);
    cout << st.topEl() << endl;
    cout << st.isFull() << endl;

    return 0;
}