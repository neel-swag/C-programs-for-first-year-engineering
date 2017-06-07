//3.2.8
#include <stdio.h>
#include <conio.h>
void main()
    {
        int i,n,sum;
        sum=0;
        printf("Enter the number :\n");
        scanf("%d",&n);
        printf("The numbers are :\n");
        for ( i = 1 ; i <= n ; i++ )
            {
                printf("%d\n",i);
                sum = sum + i ;
            }
        printf("The sum is : %d\n",sum);
        getch();
    }
