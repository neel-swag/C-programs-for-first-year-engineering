#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
    {
        int a[10][10],i,j,m,n,sum = 0;
        float avg = 0.0;
        system("cls");
        printf("Enter the number of rows and columns :\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements :\n");
        for ( i = 0 ; i <= m - 1 ; i++ )
            {
                for ( j = 0 ; j <= n - 1 ; j++ )
                    {
                        scanf("%d",&a[i][j]);
                    }
            }
        for ( i = 0 ; i <= m - 1 ; i++ )
            {
                for ( j = 0 ; j <= n - 1 ; j++ )
                    {
                        printf("%d\t",a[i][j]);
                        sum = sum + a[i][j];
                    }
                printf("\n");
            }
        avg = sum / (float)(m*n);
        printf("Sum : %d\n",sum);
        printf("Average : %f\n",avg);
        getch();
    }
