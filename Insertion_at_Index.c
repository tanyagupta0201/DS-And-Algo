#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void LinkedListTraversal(struct Node *ptr)
{
    //Traversal of a node
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;
    int i=0;
    while(i!=index)
    {
        p=p->next;
        i++;
    }
   
    ptr->data = data;
    ptr->next = p->next;
    p->next=ptr;
    return head;
}

int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    //Link first and second node
    head->data = 55;
    head->next = second;
    //Link second and third node
    second->data = -87;
    second->next = third;
    //Terminate the list at third node
    third->data = 23;
    third->next = NULL;
    printf("Linked List before Insertion: \n");
    LinkedListTraversal(head);
    head = InsertAtIndex(head, 12,0);
    printf("\nLinked List after Insertion: \n");
    LinkedListTraversal(head);
    return 0;
}