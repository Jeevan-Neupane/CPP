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

vector<int> PairWithSpecificSum(Node *head, Node *tail, int targetSum)
{
    vector<int> v(2, 0);

    Node *start = head;
    Node *end = tail;

    while (start != end)
    {
     
        if ((start->value + end->value) == targetSum)
        {
            v[0] = start->value;
            v[1] = end->value;
            break;
        }
        else if ((start->value + end->value) > targetSum)
        {
            end = end->prev;
           
        }
        else
        {
            start = start->next;
        }
    }

    return v;
}

main()
{
    DoublyLikedList listOne;
    listOne.AddElementAtLast(2);
    listOne.AddElementAtLast(5);
    listOne.AddElementAtLast(6);

    listOne.AddElementAtLast(8);
    listOne.AddElementAtLast(10);
   

    listOne.DisplayList();
    int targetSum = 11;
    vector<int> ans = PairWithSpecificSum(listOne.head, listOne.tail, targetSum);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}