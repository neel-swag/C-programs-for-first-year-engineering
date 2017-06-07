//6.1.3
#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[100],n,i,even=0,odd=0;
        printf("Enter the number of numbers :\n");
        scanf("%d",&n);
        printf("Enter the numbers :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                scanf("%d",&a[i]);
                if ( a[i] % 2 == 0 )
                    {
                        even++;
                    }
                else
                    {
                        odd++;
                    }
            }
        printf("There are %d even elements.\n",even);
        printf("There are %d odd elements.\n",odd);
        getch();
    }
