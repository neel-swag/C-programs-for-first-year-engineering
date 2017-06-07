//6.1.1
#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[100],i,n;
        printf("Enter the number of numbers :\n");
        scanf("%d",&n);
        printf("Enter the numbers :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
            }
        printf("The numbers entered were :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                printf("%d\n",a[i]);
            }
        getch();
    }
