#include <stdio.h>
#include <conio.h>
void main()
    {
        char w[7][10] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
        int m;
        printf("Enter the day no :\n");
        scanf("%d",&m);
        printf("%s",w[m-1]);
        getch();
    }
