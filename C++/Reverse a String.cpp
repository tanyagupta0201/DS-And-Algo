/*
Program to reverse a string
Author: Devika Gupta
Date Modified: 5th October 2021
*/
#include<iostream>
#include<string.h>
using namespace std;
void reverse_string(char str[20])
{
    char ch;
    int l,n;
    l=strlen(str);
    n=l;
    n--;
    for(int i=0;i<=l/2;i++)
    {
        ch=str[i];
        str[i]=str[n];
        str[n]=ch;
        n--;
    }
    cout<<"Reversed string:"<<str;
}
        
int main()
{
    char str[20]="Hacktoberfest";
    reverse_string(str);
    return 0;
}

