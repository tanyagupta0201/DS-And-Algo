/*Program to reverse a number

Author: Shobha Kumari

Date Modified: 29th October 2021

*/

#include <iostream>

using namespace std;

int main() {

int n, reverse = 0;

cout<<"Enter a number to reverse\n";

cin>>n;

while (n != 0)

{

reverse = reverse * 10;

reverse = reverse + n%10;

n = n/10;

}

/*taking unit place digit of no and moving to reverse

Dividing the no to discard unit place digit*/

cout<<"Reverse of entered number is ="<<reverse<<"\n";

    return 0;

}
