/* Author:- Priyanshu Kashyap
Date Modified :- 15/10/2021*/
#include <bits/stdc++.h>

using namespace std;

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num = 12345678;
    cout << "Reverse of no. is " << reversDigits(num);
    getchar();
    return 0;
}
