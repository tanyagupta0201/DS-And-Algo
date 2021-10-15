/* Author:- Priyanshu Kashyap
Date Modified :- 15/10/2021*/
#include<iostream>
using namespace std;
int main()
{
       int b,p,res=1,i;
       cout<<"Insert the base:";
       cin>>b;
       cout<<"Insert the power:";
       cin>>p;
       for(i=0;i<p;i++)
           res=res*b;
        cout<<"The result is :"<<res;
        return 0;
}
