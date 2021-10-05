/*
Program to search an element in an array using Linear Search
Author: Anuj Singh
Date Modified: 4th October 2021
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ans;
    if(n==0)
        return "Nothing to be searched!!";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int fn;
    cout << "Enter a number to search:" << endl;
    cin >> fn;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == fn)
        {
            ans = i;
            break;
        }
    }
    cout <<fn<<" is found at index:"<<ans << endl;
    return 0;
}
      
