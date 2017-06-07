//3.2.10
#include <stdio.h>
#include <conio.h>
void main()
    {
        int i,a,b,c,n;
        printf("Enter the number of elements you want :\n");
        scanf("%d",&n);
        a = 0 ;
        b = 1 ;
        printf("%d\n%d\n",a,b);
        for ( i = 1 ; i <= n - 2 ; i++ )
            {
                c = a + b ;
                printf("%d\n",c);
                a = b ;
                b = c ;
            }
        getch();
    }
