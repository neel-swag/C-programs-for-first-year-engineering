#include <stdio.h>
#include <conio.h>
void main()
    {
        int a[10][10],n,i,j,flag=0;
        printf("Enter the number of rows and columns :\n");
        scanf("%d",&n);
        printf("Enter the elements :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        scanf("%d",&a[i][j]);
                    }
            }
        for ( i = 0 ; i < n ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        if ( a[i][j] != a[j][i] )
                            {
                                flag = 1 ;
                            }
                    }
            }
        if ( flag == 0 )
            printf("It is symmetric matrix.\n");
        else
            printf("It is not a symmetric matrix.\n");
        getch();
    }
