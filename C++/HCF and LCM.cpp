// Program to find HCF and LCM of Two Number.

#include <iostream.h>
#include <conio.h>
void main()
{
        clrscr();
        int a, b, s, hcf, i, lcm;
        cout << " Enter Two Numbers : ";
        cin >> a >> b;
        if (a < b)
                s = a;
        else
                s = b;

        for (i = 1; i <= s; i++)
        {
                if ((a % i == 0) && (b % i == 0))
                {
                        hcf = i;
                }
        }
        cout << "\n The HCF of given Numbers is = " << hcf;
        lcm = (a * b) / hcf;
        cout << "\n The LCM of given Numbers is = " << lcm;
        getch();
}
/*
 Output:

 Enter Two Numbers : 12  18
 The HCF of given Numbers is = 6
 The LCM of given Numbers is = 36
 */
