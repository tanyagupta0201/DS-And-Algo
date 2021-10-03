/*
Program to search an element in an array using Binary Search
Author: Prajjwal Pathak
Date Modified: 3rd October 2021
*/

#include <iostream>

using namespace std;

//Array input function
void Input(int *A, int N)
{
    int i;
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
    }
}

//Binary Search Function
/*
A: Array
N: Array Size
E: Element
F: First
L: Last
M: Middle
*/
int Search(int *A, int N, int E)
{
    int i, M, F, L;
    F = 0;
    L = N - 1;
    while (F < L)
    {
        M = (F + L) / 2;
        if (A[M] == E)
        {
            return M;
        }
        else if (E < A[M])
        {
            L = M - 1;
        }
        else
        {
            F = M + 1;
        }
    }
    return -1;
}

int main()
{
    int n, e, s;
    cout << "Enter the size: ";
    cin >> n;
    int a[n];
    cout << "Enter a sorted Array: ";
    Input(a, n);
    cout << "Enter the element you want to search: ";
    cin >> e;
    s = Search(a, n, e); //Function call
    if (s == -1)
    {
        cout << "Element Not Found";
    }
    else
    {
        cout << "Element is at position " << s + 1;
    }

    return 0;
}