#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    Node *prev;
    int value;
    Node *next;

    Node(int data)
    {
        prev = NULL;
        value = data;
        next = NULL;
    }
};

class DoublyLikedList
{

public:
    Node *head;
    Node *tail;

    DoublyLikedList()
    {
        head = NULL;
        tail = NULL;
    }

    void AddElementToFirst(int value)
    {
        Node *new_node = new Node(value);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        Node *temp = head;
        head = new_node;
        head->next = temp;
        temp->prev = head;
    }

    void AddElementAtLast(int value)
    {
        Node *new_node = new Node(value);

        if (tail == NULL)
        {
            AddElementToFirst(value);
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void DisplayList()
    {
        Node *temp = head;
        cout << "NULL <--";

        while (temp != NULL)
        {
            cout << temp->value << "<-->";

            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

bool isCriticalPoint(Node *temp)
{

    if (temp->value > temp->prev->value && temp->value > temp->next->value)
        return true;
    if (temp->value < temp->prev->value && temp->value < temp->next->value)
        return true;

    return false;
}

vector<int> DistanceBetweenMinimaAndMaxima(Node *tail)
{
    vector<int> ans(2, INT16_MAX);
    int firstCP = -1;
    int lastCP = -1;

    int currPos = 0;

    Node *currentNode = tail->prev;

    while (currentNode->prev != NULL)
    {

        if (isCriticalPoint(currentNode))
        {
            if (firstCP == -1)
            {
                firstCP = lastCP = currPos;
            }
            else
            {
                ans[0] = min(ans[0], currPos - firstCP);
                ans[1] = currPos - firstCP;
                lastCP = currPos;
            }
        }
        currPos++;
        currentNode = currentNode->prev;
    }

    if (ans[0] == INT16_MAX)
    {
        ans[0] = ans[1] = -1;
    }

    return ans;
}

main()
{
    DoublyLikedList listOne;
    listOne.AddElementAtLast(1);
    listOne.AddElementAtLast(5);
    listOne.AddElementAtLast(3);

    listOne.AddElementAtLast(2);
    listOne.AddElementAtLast(6);
    listOne.AddElementAtLast(3);

    // listOne.AddElementAtLast(5);
    listOne.DisplayList();
    vector<int> ans = DistanceBetweenMinimaAndMaxima(listOne.tail);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}