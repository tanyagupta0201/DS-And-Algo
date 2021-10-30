/*
C++ Program to Implement Queue using Linked list
Author : Shobha Kumari  
Date modified : 29th October 2021 
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct node
{
        int data;
        node * next;
}*
front = NULL, * rear = NULL, * p = NULL, * np = NULL;
void push(int x) {
        np = new node;
        np -> data = x;
        np -> next = NULL;
        if (front == NULL) {
                front = rear = np;
                rear -> next = NULL;
        } else {
                rear -> next = np;
                rear = np;
                rear -> next = NULL;
        }
}
int remove() {
        int x;
        if (front == NULL) {
                cout << "empty queue\n";
        } else {
                p = front;
                x = p -> data;
                front = front -> next;
                delete(p);
                return (x);
        }
}
int main() {
        int n, c = 0, x;
        cout << "Enter the number of values to be pushed into queue\n";
        cin >> n;
        while (c < n) {
                cout << "Enter the value to be entered into queue\n";
                cin >> x;
                push(x);
                c++;
        }
        cout << "\n\n Removed Values \n\n";
        while (true) {
                if (front != NULL)
                        cout << remove() << endl;
                else
                        break;
        }
        getch();
}

    
/*
Output
Enter the number of values to be pushed into queue
6
Enter the value to be entered into queue
5
Enter the value to be entered into queue
4
Enter the value to be entered into queue
3
Enter the value to be entered into queue
2
Enter the value to be entered into queue
1
Enter the value to be entered into queue
0
 
 
Removed Values
 
5
4
3
2
1
0
*/
    







   

    

   

 

    

      

      

    

  

    

       

       

       

    







   

    

    

      

    

  

    

     

        

       

        
	    

        

    







   



 

   

    

	 

       

     

     

   

     

     

       

            

     

          

  

   


