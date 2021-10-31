/*
Deletion in Linked List
Author: PRINCE CHANDAPILLAI
Date Modified: 30th October 2021
*/
#include <stdio.h>
void main()
{
    int i, j, k, n, m, safe[10], ind = 0, f[10];
    int alloc[10][10], max[10][10], avail[10];
    printf("Enter the number of processes\n");
    scanf("%d", &n);
    printf("Enter the number of resources \n");
    scanf("%d", &m);
    printf("Enter the  CURRENT STATUS OF allocated resources of Every Process\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter the %dth process of %d resources\n", i + 1, j + 1);
            scanf("%d", &alloc[i][j]);
        }
    }
    printf("Enter the  MAXIMUM NEED  OF allocated resources of Every Process\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter the %dth process of %d resources\n", i + 1, j + 1);
            scanf("%d", &max[i][j]);
        }
    }
    printf("Enter the AVAILIABLE COUNT FOR EACH RESOURCE\n");
    for (i = 0; i < m; i++)
    {
        printf("Enter the availiable number of RESOURCE type %d\n", i + 1);
        scanf("%d", &avail[i]);
        f[i] = 0;
    }
    int need[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }
    int y = 0;
    for (k = 0; k < 5; k++)
    {
        for (i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
             
                int flag = 0;
                for (j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    safe[ind++] = i;
                    for (y = 0; y < m; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }
printf("SAFE SEQUENCE\n");
for (i=0;i<ind;i++)
{
    printf("P%d -> ", safe[i]);
}
printf("P%d", safe[ind-1]);
}
