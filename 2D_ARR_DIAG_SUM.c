#include <stdio.h>
#include <conio.h>
int diasum ( int a[10][10] , int n );
void main()
    {
        int a[10][10],n,i,j;
        printf("Enter rows in square matrix :\n");
        scanf("%d",&n);
        printf("Enter elements : \n");
        for ( i = 0 ; i < n ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        scanf("%d",&a[i][j]);
                    }
            }
        printf("The given matrix is :\n");
        for ( i = 0 ; i < n ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        printf("%d ",a[i][j]);
                    }
                printf("\n");
            }
        int ans = diasum (a,n);
        printf("Sum of diagonal elements is : %d\n",ans);
        getch();
    }
int diasum ( int a[10][10] , int n )
    {
        int sum = 0 , i, j ;
        for ( i = 0 ; i < n ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        if ( i == j )
                            {
                                sum = sum + a[i][j];
                            }
                    }
            }
        return sum ;
    }
