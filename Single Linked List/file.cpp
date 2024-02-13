#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
};

void PrintList(Node *head)
{
    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->Next;
    }
}

void AddToBeginning(Node *&head, int value) {
    Node *NewNode = new Node();

    NewNode->value = value;
    NewNode->Next = head;

    head = NewNode;
}

int main()
{

    
    Node *head = NULL;
    
    AddToBeginning(head, 1);
    AddToBeginning(head, 2);
    AddToBeginning(head, 3);

    PrintList(head);

    return 0;
}