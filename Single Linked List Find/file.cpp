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

Node *Find (Node *head, int value) {
    while (head != NULL)
    {
        if (head->value == value)
        {
            return head;
        }
        
        head = head->Next;
        
    }
    
    return NULL;
}

int main()
{

    
    Node *head = NULL;
    
    AddToBeginning(head, 1);
    AddToBeginning(head, 2);
    AddToBeginning(head, 3);


    Node *FoundNode =  Find(head, 2);
    cout << FoundNode->value << endl;

    return 0;
}