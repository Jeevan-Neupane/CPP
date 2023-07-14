#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.pop();
    cout << que.front() << endl;

    return 0;
}