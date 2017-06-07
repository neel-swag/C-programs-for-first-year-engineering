//3.2.52
#include <stdio.h>
#include <conio.h>
void main()
    {
        int n,copy,d,res=0;
        printf("Enter the number :\n");
        scanf("%d",&n);
        copy = n ;
        while ( n != 0 )
            {
                d = n % 10 ;
                res = res * 10 + d ;
                n = n / 10 ;
            }
        if ( copy == res )
            {
                printf("It is a palindrome.\n");
            }
        else
            {
                printf("It is not a palindrome.\n");
            }
        getch();
    }
