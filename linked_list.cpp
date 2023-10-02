#include <iostream>

using namespace std;

class Node
{
public:
    int data;   // stores the given data
    Node *next; // stores the address of the next node
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node; // making a new node where we insert the data
    temp->data = data;     // inserting data
    temp->next = head;     // the "next" of the new node will point towards the already existing node
    head = temp;           // and head will be resetted to the first (new node)
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node();
    temp->data = data;
    tail->next = temp;
    tail = temp;
}

void insertAtposition(int pos, int data, Node *&head, Node *&tail)
{
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;

    int count = 1;
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == nullptr) // checking if temp reached the last node using the while loop
    {
        insertAtTail(tail, data);
        return;
    }

    Node *nodeToInsert = new Node();
    nodeToInsert->data = data;
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deletePosition(int pos, Node *&head, Node *&tail)
{
    Node *temp = head; // creating a pointer to the first node
    if (pos == 1)      // checks if we delete the first node
    {
        head = temp->next; // head will move to next node
        return;
    }
    int count = 1;        // 1 based indexing
    Node *prev = nullptr; // second pointer to keep track of the node behind temp
    while (count < pos)   // reaching till the node to delete (remember: 1 based indexing)
    {
        prev = temp;       // update prev to current node
        temp = temp->next; // current (temp) to next node
        count++;           // keeps track of number of nodes and position counter
    }
    if (temp->next == nullptr) // if the current(temp) node is the last node
    {
        tail = prev; // update tail to the previopus node
    }
    prev->next = temp->next; // the next pointer of prev will point to the node ahead of current node
    // tail = prev;
    delete temp; // deleting temp
}

void deleteValue(Node *&head, Node* &tail, int value)
{
    Node *curr = head;
    Node *prev = nullptr;
    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    if (prev == nullptr)
    {
        head = curr->next;
        delete curr;
        return;
    }
    if (curr->next == nullptr)
    {
        tail = prev;
    }
    prev->next = curr->next;
    delete curr;

}

void printList(Node *head) // using reference of head so as to not creatre a copy of entire linked list
// however I am using a copy so that this function doesn't modify head
{
    while (head != nullptr) // while we reach the last node
    {
        cout << head->data << " "; // prints the data
        head = head->next;         // traversal of the list using node addresses
    }
}

void printHandT(Node *&head, Node *&tail)
{
    cout << "\nHead is : " << head->data << endl;
    cout << "Tail is : " << tail->data << endl;
}

int main()
{
    Node *node1 = new Node(); // starting first node
    node1->data = 2; // inserting data in first node
    Node *head = node1; // pointer to first node
    Node *tail = node1; // same as above
    // insertAtHead(head, 5);
    // insertAtHead(head, 10);
    // insertAtHead(head, 15);
    // insertAtHead(head, 20);

    insertAtTail(tail, 4);
    insertAtTail(tail, 5);
    insertAtHead(head, 1);

    insertAtposition(3, 3, head, tail);
    insertAtposition(6, 6, head, tail);

    // printList(head);
    // cout << endl;
    // deleteValue(head, tail, 1);
    // deletePosition(2, head, tail);
    // deleteValue(head, tail, 6);
    printList(head);
    printHandT(head, tail);
    return 0;
}