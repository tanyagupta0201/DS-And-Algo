/*
Optimal Merge Pattern
Author: Neetu Kumari
Date modified: 17/10/2021
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
signed main() 
{
    int n; 
    cin >> n;
 
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
 
    priority_queue<int, vector<int>, greater<int> > minheap;    // push all elements to a min heap
    for(int i = 0; i < n; i++) 
    {
        minheap.push(a[i]);
    }
 
    int ans = 0;
 
    while(minheap.size() > 1) 
    {               
        // taking top two elements merge them and push the merged file to the min heap
        int e1 = minheap.top();
        minheap.pop();
        int e2 = minheap.top();
        minheap.pop();
 
        ans += e1 + e2;                      
        minheap.push(e1 + e2);                // single element remains at last which is the output
    }
 
    cout << ans << endl;
    return 0;
}
