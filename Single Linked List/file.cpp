#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};

int main()
{

    Node *Node1 = new Node();
    Node *Node2 = new Node();
    Node *Node3 = new Node();

    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    Node1->Next = Node2;
    Node2->Next = Node3;
    Node3->Next = NULL;

    Node *head = Node1;

    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->Next;
    }
    
    return 0;
}