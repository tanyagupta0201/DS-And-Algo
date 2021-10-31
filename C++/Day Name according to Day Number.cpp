/* Program to display Day Name according to Day Number ( 1 to 7).
Author : Sonu Kumar (SonuKr23)
Date modified : 31 October 2021 */

#include <iostream.h>
#include <conio.h>
void main()
{
        clrscr();
        int n;

        cout << "\n Enter Number to convert day ( 1 to 7 ) ::: ";
        cin >> n;

        switch (n)
        {
        case 1:
                cout << "\n Monday";
                break;
        case 2:
                cout << "\n Tuesday";
                break;
        case 3:
                cout << "\n Wednesday";
                break;
        case 4:
                cout << "\n Thursday";
                break;
        case 5:
                cout << "\n Friday";
                break;
        case 6:
                cout << "\n Saturday";
                break;
        case 7:
                cout << "\n Sunday";
                break;
        default:
                cout << "\n Wrong Number.";
                break;
        }
        getch();
}

/*
 Output:
 Enter Number to convert day ( 1 to 7 ) ::: 5

 Friday
 */
