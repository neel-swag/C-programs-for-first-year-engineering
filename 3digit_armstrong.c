#include <stdio.h>
#include <conio.h>
int check ( int n );
void main()
    {
        int n;
        for ( n = 100 ; n <= 999 ; n++ )
            {
                if ( check(n) == 1 )
                    {
                        printf("%d\n",n);
                    }
            }
        getch();
    }
int check ( int n )
    {
        int copy,d,sum =0;
        copy = n ;
        while ( n != 0 )
            {
                d = n % 10 ;
                sum = sum + d*d*d;
                n = n / 10 ;
            }
        if ( copy == sum )
            return 1;
        else
            return 0;
    }
