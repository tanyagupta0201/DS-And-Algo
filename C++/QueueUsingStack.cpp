/*
 *  Queue Using Stack
 *  Implement Queue data structure using Stack
 *  Author: Shakti Raj Pandey
 *
 */

#include <bits/stdc++.h>
using namespace std;

// Algorithm
// 1) PUSH: Push an element involves shifting Stack s1 data to Stack s2 
//    and then add the element to Stack s1, after this again push s2 data to s1
// 2) POP: Popping an element requires to pop element from s1 directly 
 
struct Queue {
    stack<int> s1, s2;
 
    // PUSH an item 'x' to Queue
    void push(int x)
    {
        // Move all elements from s1 to s2
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
 
        // Push item into s1
        s1.push(x);
 
        // Push everything back to s1
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
 
    // POP an item from the Queue
    int pop()
    {
        // if first stack is empty
        if (s1.empty()) {
            cout << "Queue is Empty";
            exit(0);
        }
 
        // Return top of s1
        int x = s1.top();
        s1.pop();
        return x;
    }
};
 
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
 
    cout << q.pop() << '\n';
    cout << q.pop() << '\n';
    cout << q.pop() << '\n';
    cout << q.pop() << '\n'; 
    return 0;
}