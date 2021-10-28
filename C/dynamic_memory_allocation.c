/*Displaying the student marks by using the concept of dynamic memory alocation.
Name of the author:Bhagyashree N M
Date Modified:27th oct 2021*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int index = 0, i = 0, n,
        *marks; // this marks pointer hold the base address
                // of  the block created
    int ans;
    marks = (int*)malloc(sizeof(
        int)); // dynamically allocate memory using malloc
    // check if the memory is successfully allocated by
    // malloc or not?
    if (marks == NULL) {
        printf("memory cannot be allocated");
    }
    else {
        // memory has successfully allocated
        printf("Memory has been successfully allocated by "
               "using malloc\n");
        printf("\n marks = %pc\n",
               marks); // print the base or beginning
                       // address of allocated memory
        do {
            printf("\n Enter Marks\n");
            scanf("%d", &marks[index]); // Get the marks
            printf("would you like to add more(1/0): ");
            scanf("%d", &ans);
 
            if (ans == 1) {
                index++;
                marks = (int*)realloc(
                    marks,
                    (index + 1)
                        * sizeof(
                            int)); // Dynamically reallocate
                                   // memory by using realloc
                // check if the memory is successfully
                // allocated by realloc or not?
                if (marks == NULL) {
                    printf("memory cannot be allocated");
                }
                else {
                    printf("Memory has been successfully "
                           "reallocated using realloc:\n");
                    printf(
                        "\n base address of marks are:%pc",
                        marks); ////print the base or
                                ///beginning address of
                                ///allocated memory
                }
            }
        } while (ans == 1);
        // print the marks of the students
        for (i = 0; i <= index; i++) {
            printf("marks of students %d are: %d\n ", i,
                   marks[i]);
        }
        free(marks);
    }
    return 0;
}
