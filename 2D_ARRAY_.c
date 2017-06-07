#include <stdio.h>
#include <conio.h>
void main()
    {
        char a[7][12] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
        int m;
        printf("Enter the day number :\n");
        scanf("%d",&m);
        printf("The corresponding day is :\n");
        printf("%s",a[m-1]);
        getch();
    }
