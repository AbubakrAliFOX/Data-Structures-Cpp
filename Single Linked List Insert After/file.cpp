#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void PrintList(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}


void InsertAfter(Node *&PrevNode, Node *&nextNode) {
    nextNode->next = PrevNode->next;
    PrevNode->next = nextNode;
}

int main()
{
    // Create nodes for example:
    Node *Node1 = new Node();
    Node *Node2 = new Node();
    Node *Node3 = new Node();

    Node1->value = 1;
    Node2->value = 2;
    Node3->value = 3;

    Node1->next = Node2;
    Node2->next = Node3;
    Node3->next = NULL;

    Node *head = Node1;
    // end example nodes

    // Insert After:
    Node *NewNode = new Node();
    NewNode->value = 20;

    InsertAfter(Node2, NewNode);

    // Print result
    PrintList(head);
    return 0;
}