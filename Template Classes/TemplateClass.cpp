#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T value;
    Node *next;

    Node(T data)
    {
        value = data;
        next = NULL;
    }
};

int main()
{

    Node<int> List1(5);
    Node<char> List2('a');
    cout << List2.value << endl;

    return 0;
}