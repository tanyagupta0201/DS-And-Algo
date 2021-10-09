/*
Search Middle element in Linked List
Author: Shradha Verma
Date Modified: 9th October 2021
*/

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void push(Node** head, int new_data)
{
    Node* new_node = new Node;
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << "->";
        node = node->next;
    }
    cout << "NULL";
    
}

void printMid(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    if(head != NULL){
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        cout << slow->data << endl;
    }
    
    
}

int main()
{
    Node* head = NULL;
    push(&head, 9);
    push(&head, 4);
    push(&head, 6);
    push(&head, 3);
    push(&head, 2);
    push(&head, 7);
    cout << "Linked List created is ";
    printList(head);
    cout << endl;
    cout << "Middle element is: ";
    printMid(head);
    return 0;
}