//5.2.2
#include <stdio.h>
#include <conio.h>
void incr()
    {
        static int i=0;
        i = i + 1 ;
        printf("%d\n",i);
    }
void main()
    {
        incr();
        incr();
        incr();
        getch();
    }
