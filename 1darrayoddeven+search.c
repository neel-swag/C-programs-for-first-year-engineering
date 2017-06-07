#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[10],i,flag=0,even=0,odd=0,term;
        printf("Enter ten elements:\n");
        for ( i = 0 ; i <= 9 ; i++ )
            {
                scanf("%d",&a[i]);
            }
        for ( i = 0 ; i <= 9 ; i++ )
            {
                if ( a[i] % 2 == 0 )
                    even++ ;
                else
                    odd++ ;
            }
        printf("Even elements : %d\n",even);
        printf("Even elements : %d\n",odd);
        printf("Enter element you want to search:\n");
        scanf("%d",&term);
        for ( i = 0 ; i <= 9 ; i++ )
            {
                if ( term == a[i] )
                    {
                        flag = 1 ;
                        printf("%d found at index %d\n",a[i],i);
                    }
            }
        if ( flag == 0 )
            printf("%d does not exist in array",term);
        getch();
    }
