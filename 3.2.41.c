//3.2.41
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
    {
        int n,i;
        printf("Enter the number in decimal form :\n");
        scanf("%d",&n);
        printf("The number in binary form is :\n");
        for ( i = 15 ; i >= 0 ; i-- )
            {
                printf("%d",n/(int)pow(2,i));
                n = n % (int)pow(2,i);
            }
        getch();
    }
