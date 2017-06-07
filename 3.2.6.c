//3.2.6
#include <stdio.h>
#include <conio.h>
void main()
    {
        int i=1,n,num=0;
        printf("Enter the number of numbers you want :\n");
        scanf("%d",&n);
        while ( i <= n )
        {
            num = num + 1 ;
            if ( num % 2 != 0 )
            {
                printf("%d \n",num);
                i = i + 1;
            }
        }
        getch();
    }
