/*
Insertion in Linked List
Author: Shradha Verma
Date Modified: 8th October 2021
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

void InsertAfter(Node* prevnode, int new_data)
{
    if (prevnode == NULL){
        cout << "The given previous node cannot be null";
        return;
    }
    
    Node* new_node = new Node();
    new_node-> data = new_data;
    new_node->next = prevnode->next;
    prevnode->next = new_node;
}

void InsertEnd(Node** head, int new_data)
{
    Node* new_node = new Node();
    Node* last = *head;
    new_node->data = new_data;
    new_node->next = NULL;
    
    if (*head == NULL){
        *head = new_node;
        return;
    }
    
    while(last->next != NULL){
        last = last->next;
    }
    
    last->next = new_node;
    return;
}

void printList(Node* node)
{
    while(node!= NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
}

int main()
{
    
    Node* head = NULL;
    InsertEnd(&head, 9);
    InsertBeg(&head, 4);
    InsertBeg(&head, 6);
    InsertEnd(&head, 3);
    InsertBeg(&head, 2);
    InsertAfter(head->next,8);
    cout << "Linked List created is ";
    printList(head);
    return 0;
}
