/*
Creating a Binary Tree
Author: Shantanu Sharma
Date Modified: 6th October 2021
*/

#include<stdio.h>
#include<conio.h>

//Declaring structure of tree node
struct treenode
{
    int data;
    struct treenode *left;
    struct treenode *right;
};
struct treenode *root, *newnode, *temp, *tra;

//creating tree nodes
void create(int x)
{
    newnode = (struct treenode*)malloc(sizeof(struct treenode));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    
    if(root == NULL)
    {
        temp = root = newnode;
    }
    else if(temp->left == NULL || temp->right == NULL)
    {
        if (temp->left == NULL)
        {
            temp->left = newnode;
        }
        else
        {
            temp->right = newnode;
        }
    }

}

//printing the nodes of the tree
void print()
{
   if (root == NULL)
        printf("The Tree is empty");
   else
   {
       tra = root;
       printf("%d", root->data);
       
       tra = root->left;
       printf("%d", tra->data);
       
       tra = root->right;
       printf("%d", tra->data);
   }
}

void main()
{
    int x;
    
    printf("Enter elements of the tree one by one: ");
    
    scanf("%d", &x);
    create(x);
    
    scanf("%d", &x);
    create(x);
    
    scanf("%d", &x);
    create(x);

    print();
}
