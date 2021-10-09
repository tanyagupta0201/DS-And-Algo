/*
Deletion in Linked List
Author: Shradha Verma
Date Modified: 9th October 2021
*/

#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

void InsertBeg(Node** head, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

// delete a given number in LL
void DeleteNode(Node** head, int key)
{
    Node* temp = *head;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key){
        *head = temp->next;
        delete temp;
        return;
    }
    else{
        while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL)
            return;
        prev->next = temp->next;
        delete temp;
    }

}

void PrintList(Node* n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

int main()
{
    Node* head = NULL;
    InsertBeg(&head, 7);
    InsertBeg(&head, 1);
    InsertBeg(&head, 3);
    InsertBeg(&head, 2);
    InsertBeg(&head, 9);

    cout << "Created linked list is: " <<endl;
    PrintList(head);
    DeleteNode(&head, 3);
    cout << endl;
    cout << "Linked List after Deletion: " << endl;
    PrintList(head);
    return 0;
}
