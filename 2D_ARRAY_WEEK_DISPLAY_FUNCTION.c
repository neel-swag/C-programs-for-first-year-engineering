#include <stdio.h>
#include <conio.h>
void main()
    {
        int m;
        void weekdisp ( int n );
        printf("Enter the day number :\n");
        scanf("%d",&m);
        weekdisp(m);
        getch();
    }
void weekdisp ( int n )
    {
        char w[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
        printf("%s",w[n-1]);
    }
