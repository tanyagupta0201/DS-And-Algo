/*C program to arrange student record in descending order
Name of author:Bhagyashree N M
Date modified:24th october 2021*/

#include<stdio.h>
struct student
{
     int rno;
     char name[20];
     int marks[3];
     int total;
     float avg;
}stud[2];
int main()
{
     int i,j;
     struct student s;
     for(i=0;i<2;i++)
     {
          printf("Enter Record for Student-%d \n",i+1);
          printf("-----------------------------------\n");
          printf("Enter Roll-No. : ");
          scanf("%d",&stud[i].rno);
          printf("Enter Name     : ");
          scanf("%s",stud[i].name);
          stud[i].total=0;
          for(j=0;j<3;j++)
          {
               printf("Enter Marks of Subject %d : ",j+1);
               scanf("%d",&stud[i].marks[j]);
               stud[i].total=stud[i].total+stud[i].marks[j] ;
               stud[i].avg=stud[i].total/3.0;
          }
          printf("\n-----------------------------------\n");
     }
     for(i=0;i<2;i++)
     {
          for(j=i+1;j<2;j++)
          {
               if(stud[i].total<stud[j].total)
               {
                    s=stud[i];
                    stud[i]=stud[j];
                    stud[j]=s;
               }
          }
     }
     printf("Records in Descending Order.\n (According to Total-Marks)");
     printf("\n-----------------------------------\n");
     printf("\n ROLLNO   NAME  TOTAL-MARKS  AVG\n");
     for(i=0;i<2;i++)
     {
          printf("\n %d\t %s\t %d\t %.2f",stud[i].rno,stud[i].name,stud[i].total,stud[i].avg);
     }
     return 0;
}
