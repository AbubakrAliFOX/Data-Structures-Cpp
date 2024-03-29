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

void AddToBeginning(Node *&head, int value) {
    Node *NewNode = new Node();

    NewNode->value = value;
    NewNode->next = head;

    head = NewNode;
}

Node *Find (Node *head, int value) {
    while (head != NULL)
    {
        if (head->value == value)
        {
            return head;
        }
        
        head = head->next;
        
    }
    
    return NULL;
}

void InsertAfter(Node *&PrevNode, int value)
{
    Node *NewNode = new Node();
    NewNode->value = value;
    NewNode->next = PrevNode->next;
    
    PrevNode->next = NewNode;
}

int main()
{
    // Create nodes for example:
    Node *head = NULL;
    AddToBeginning(head, 1);
    AddToBeginning(head, 2);
    AddToBeginning(head, 3);

    // Insert After:
    Node *N1 = Find(head, 2);

    InsertAfter(N1, 500);

    // Print result
    PrintList(head);
    return 0;
}