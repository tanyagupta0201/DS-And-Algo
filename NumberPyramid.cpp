/*
Number pyramid pattern
Author: Neetu Kumari
Date modified: 18-10-2021
*/

#include<iostream>

using namespace std;

int main() {
  int n;              // rows:1 to n  
  cin >> n;
  
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  }
}
