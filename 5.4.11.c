//5.4.11
#include <stdio.h>
#include <conio.h>
int main()
    {
        int num,reverse;
        printf("Enter any number :\n");
        scanf("%d",&num);
        reverse = rev (num );
        printf("Reverse of number : %d",reverse);
        getch();
    }
int rev ( int num )
    {
        static sum,r;
        if ( num )
            {
                r = num % 10;
                sum = sum * 10 + r ;
                rev  (num / 10);

            }
        else
        return 0;
        return sum;
    }
