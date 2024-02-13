// ProgrammingAdvices.com
// Mohammed Abu-Hadhoud

#include <iostream>
using namespace std;

// Create a node
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
};

void PrintNodeDetails(Node *head)
{

    if (head->prev != NULL)
        cout << head->prev->value;
    else
        cout << "NULL";

    cout << " <--> " << head->value << " <--> ";

    if (head->next != NULL)
        cout << head->next->value << "\n";
    else
        cout << "NULL";
}

// Print the linked list
void PrintListDetails(Node *head)

{
    cout << "\n\n";
    while (head != NULL)
    {
        PrintNodeDetails(head);
        head = head->next;
    }
}

// Print the linked list
void PrintList(Node *head)

{
    cout << "NULL <--> ";
    while (head != NULL)
    {
        cout << head->value << " <--> ";
        head = head->next;
    }
    cout << "NULL";
}

void InsertAtBeginning(Node *&head, int value)
{

    /*
        1-Create a new node with the desired value.
        2-Set the next pointer of the new node to the current head of the list.
        3-Set the previous pointer of the current head to the new node.
        4-Set the new node as the new head of the list.
    */

    Node *newNode = new Node();
    newNode->value = value;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;
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

void InsertAfter(Node *&Current, int value)
{

    Node *NewNode = new Node();
    NewNode->value = value;

    NewNode->next = Current->next;
    NewNode->prev = Current;

    if (Current->next != NULL)
    {
        Current->next->prev = NewNode;
    }

    Current->next = NewNode;
}

void InsertAtEnd(Node *&head, int value)
{
    Node *NewNode = new Node();
    NewNode->value = value;

    if (head == NULL)
    {
        head = NewNode;
        return;
    }

    Node *Current = head;
    while (Current != NULL)
    {
        if (Current->next == NULL)
        {
            Current->next = NewNode;
            NewNode->prev = Current;
            NewNode->next = NULL;
            return;
        }
        Current = Current->next;
    }
}

void Delete(Node *&head, Node *&NodeToDelete)
{
    if (head == NULL || NodeToDelete == NULL)
    {
        return;
    }

    if (head == NodeToDelete)
    {
        head = NodeToDelete->next;
    }

    if (NodeToDelete->next != NULL)
    {
        NodeToDelete->next->prev = NodeToDelete->prev;
    }

    if (NodeToDelete->prev != NULL)
    {
        NodeToDelete->prev->next = NodeToDelete->next;
    }

    delete NodeToDelete;
}

void DeleteFirstNode(Node *&head)
{
    Node *ToBeDeleted = new Node();

    if (head->next == NULL)
    {
        head = NULL;
        return;
    }

    if (head != NULL)
    {
        ToBeDeleted = head;
        head = ToBeDeleted->next;
        head->prev = NULL;
        delete ToBeDeleted;
    }
}

int main()
{
    Node *head = NULL;

    InsertAtBeginning(head, 5);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 1);

    cout << "\nLinked List Contenet:\n";
    // PrintList(head);

    // /// Insert after:
    // Node *N1 = Find(head, 1);
    // InsertAfter(N1, 100);

    // // Insert at end
    // InsertAtEnd(head, 400);

    // // Delete
    // Node *N1 = Find(head, 1);
    // Delete(head, N1);

    // Delete First Node
    DeleteFirstNode(head);

    // Print
    PrintList(head);
    PrintListDetails(head);

    return 0;
}