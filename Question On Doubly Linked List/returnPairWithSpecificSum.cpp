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

vector<int> PairWithSpecificSum(Node *head, int targetSum)
{
    vector<int> v(2, 0);

    Node *currentNode = head;

    while (currentNode->next != NULL)
    {
        Node *nextNode = currentNode->next;

        while (nextNode != NULL)
        {
            if ((currentNode->value + nextNode->value) == targetSum)
            {
                v[0] = currentNode->value;
                v[1] = nextNode->value;
            }

            nextNode = nextNode->next;
        }
        currentNode = currentNode->next;
    }

    return v;
}

main()
{
    DoublyLikedList listOne;
    listOne.AddElementAtLast(1);
    listOne.AddElementAtLast(2);
    listOne.AddElementAtLast(3);

    listOne.AddElementAtLast(4);
    listOne.AddElementAtLast(5);
    listOne.AddElementAtLast(6);

    listOne.DisplayList();
    int targetSum = 10;
    vector<int> ans = PairWithSpecificSum(listOne.head, targetSum);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}