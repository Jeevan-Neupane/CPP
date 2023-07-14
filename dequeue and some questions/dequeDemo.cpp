#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq = {1, 2, 3, 4, 5};
    dq.push_front(100);
    dq.pop_back();
    dq.push_back(200);

    for (int i : dq)
    {
        cout << i << endl;
    }

    return 0;
}