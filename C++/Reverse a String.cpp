/*
Program to reverse a string
Author: Laasya Gupta
Date Modified: 4th October 2021
*/


#include <iostream>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int right = s.size() - 1;
        int left = 0;

        while (left < right)
        {
            char c = s[left];
            s[left] = s[right];
            s[right] = c;

            left += 1;
            right += 1;
        }
    }
};


