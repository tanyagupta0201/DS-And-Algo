/*
Author: Shobha Kumari
Date Modified: 29th October 2021
*/

#include <iostream>
using namespace std;
int main()
{
        int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
        cout << "Enter the number of row=";
        cin >> r;
        cout << "Enter the number of column=";
        cin >> c;
        cout << "Enter the first matrix element=\n";
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                        cin >> a[i][j];
                }
        }
        cout << "Enter the second matrix element=\n";
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                        cin >> b[i][j];
                }
        }
        cout << "Multiply of the matrix=\n";
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                        mul[i][j] = 0;
                        for (k = 0; k < c; k++) {
                                mul[i][j] += a[i][k] * b[k][j];
                        }
                }
        }
        //for printing result    
        for (i = 0; i < r; i++) {
                for (j = 0; j < c; j++) {
                        cout << mul[i][j] << " ";
                }
                cout << "\n";
        }
        return 0;
}

/*
output
Enter the number of row=3  
Enter the number of column=3  
Enter the first matrix element= 
1 2 3
1 2 3  
1 2 3       
Enter the second matrix element= 
1 1 1  
2 1 2   
3 2 1    
Multiply of the matrix=  
14 9 8      
14 9 8  
14 9 8
*/

    

       

           
    

   
    
   
    

       
           
    

    

    

    
   

   

   






 

    
  

  

    

       

        

    

  

  

    

      

        



                  
        

    

    
 







 

 

   

     

            

     

    




