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
    if (head == NULL)
    {
        cout << "NULL" << endl;
    }

    while (head != NULL)
    {
        cout << head->value << endl;
        head = head->next;
    }
}

void AddToBeginning(Node *&head, int value)
{
    Node *NewNode = new Node();

    NewNode->value = value;
    NewNode->next = head;

    head = NewNode;
}

void AddToEnd(Node *&head, int value)
{
    Node *NewNode = new Node();

    NewNode->value = value;
    NewNode->next = NULL;

    if (head == NULL)
    {
        head = NewNode;
        return;
    }

    Node *LastNode = head;

    while (LastNode != NULL)
    {
        if (LastNode->next == NULL)
        {
            LastNode->next = NewNode;
            break;
        }
        LastNode = LastNode->next;
    }
}

Node *Find(Node *head, int value)
{
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

void Delete(Node *&head, int value)
{
    Node *Current = head, *Prev = head;

    if (head == NULL)
    {
        return;
    }

    if (Current->value == value)
    {
        head = Current->next;
        delete Current;
        return;
    }

    while (Current != NULL && Current->value != value)
    {
        Prev = Current;
        Current = Current->next;
    }

    if (Current == NULL)
    {
        return;
    }

    Prev->next = Current->next;
    delete Current;
}

void DeleteFirstNode(Node *&head)
{
    if (head == NULL)
    {
        return;
    }

    Node *Current = head;
    head = Current->next;
    delete Current;
}

void DeleteLastNode(Node *&head)
{
    Node *Current = head;
    Node *Next = Current->next;

    if (Current->next == NULL)
    {
        head = NULL;
        delete Current;
        return;
    }

    while (Current != NULL)
    {
        if (Next->next == NULL)
        {
            Current->next = NULL;
            delete Next;
            return;
        }

        Current = Current->next;
        Next = Current->next;
    }
}

int main()
{
    // Create nodes for example:
    Node *head = NULL;
    AddToBeginning(head, 3);
    AddToBeginning(head, 2);
    AddToBeginning(head, 1);

    // Insert at end:
    AddToEnd(head, 4);
    AddToEnd(head, 5);

    // Delete
    // Delete(head, 1);
    // DeleteFirstNode(head);
    DeleteLastNode(head);

    // Print result
    PrintList(head);
    return 0;
}