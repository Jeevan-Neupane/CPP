#include <iostream>
#include <vector>

using namespace std;

class Queue
{
    int front;
    int back;
    int currentSize;
    int totalSize;

    vector<int> v;

public:
    Queue(int n)
    {
        v.resize(n);
        totalSize = n;
        front = 0;
        back = n - 1;

        currentSize = 0;
    }

    void queue(int value)
    {
        if (isFull())
        {
            return;
        }
        back = (back + 1) % totalSize;
        v[back] = value;
        currentSize++;
    }
    void dequeue()
    {
        if (isEmpty())
        {
            return;
        }

        front = (front + 1) % totalSize;
        currentSize--;
    }
    int getFront()
    {
        if (front == -1)
        {
            return -1;
        }
        else
        {
            return v[front];
        }
    }

    bool isEmpty()
    {
        return currentSize == 0;
    }
    bool isFull()
    {
        return currentSize == totalSize;
    }
};

int main()
{
    Queue que(4);
    que.queue(10);
    que.queue(20);
    que.queue(30);
    que.queue(40);
    que.dequeue();
    que.queue(20);

    while (!que.isEmpty())
    {
        cout << que.getFront() << endl;
        que.dequeue();
    }

    return 0;
}