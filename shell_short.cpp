
/*
cpp program for shell sort
Author: Anil Kumar
Date modified:21-10-2021
*/

#include <iostream>
using namespace std;

int shell_short(int a[], int n)
{

    int i, j;
    for (int gap = n / 2; gap > 0; gap /= 2)
    {

        for (i = gap; i < n; i++)
        {
            int k = a[i];
            j = i;

            while (j >= gap && a[j-gap] > k)
            {
                a[j] = a[j-gap];
                j = j - gap;
            }
            a[j] = k;
        }
    }
    return 0;
}

int main()
{

    cout << "enter the number of element:";
    int n;
    cin >> n;
    int a[n];
    cout << endl
         << "enter the the elements:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
        
    shell_short(a, n);
    cout << endl<< "shorted elements:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
