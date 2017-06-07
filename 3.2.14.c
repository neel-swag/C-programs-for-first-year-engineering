//3.2.14
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
    {
        int n,i,x,term;
        printf("Enter the base :\n");
        scanf("%d",&x);
        printf("Enter the maximum power :\n");
        scanf("%d",&n);
        for ( i = 1 ; i <= n ; i++ )
            {
                term = pow ( x , i );
                printf("%d raised to %d : %d\n",x,i,term);
            }
        getch();
    }
