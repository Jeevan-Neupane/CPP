#include <iostream>
#include <vector>

using namespace std;

class Queue
{
    int front = -1;
    int back = -1;
    vector<int> v;

public:
    Queue()
    {
        front = -1;
        back = -1;
    }

    void queue(int value)
    {
        v.push_back(value);

        back++;
        if (back == 0)
        {
            front = 0;
        }
        
    }
    void dequeue()
    {
        if (front == back)
        {
            front = -1;
            back = -1;
            v.clear();
        }
        else
        {
            front++;
        }
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
        return front == -1;
    }
};

int main()
{
    Queue que;
    que.queue(10);
    que.queue(20);
    que.queue(30);
    que.dequeue();
    que.dequeue();
    que.dequeue();
    que.queue(40);
    que.queue(50);
    que.dequeue();
    que.dequeue();
    que.queue(100);

    
    while(!que.isEmpty()){
        cout<<que.getFront()<<endl;
        que.dequeue();

    }

    return 0;
}