//3.2.47
#include <stdio.h>
#include <conio.h>
void main()
    {
        int sum,n,i,term,j;
        sum = 0 ;
        printf("Enter the number :\n");
        scanf("%d",&n);
        for ( i = 1 ; i <= 2*n-1 ; i++ )
            {
                term = 1;
                for ( j = 1 ; j <= i ; j++ )
                {

                    term = term * i ;

                }
                sum = sum + term;
            }
        printf("The sum is : %d\n",sum);
        getch();


    }
