#include <stdio.h>
#include <conio.h>
void calc ( float a[10][10] , int m , int n );
void main()
    {
        float a[10][10];
        int i,j,m,n;
        printf("Enter the number of rows and columns :\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements :\n");
        for ( i = 0 ; i < m ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        scanf("%f",&a[i][j]);
                    }
            }
        calc ( a , m , n );
        getch();
    }
void calc ( float a[10][10] , int m , int n )
    {
        int i,j;
        float csum=0.0,rsum=0.0;
        printf("The entered matrix :\n");
        for ( i = 0 ; i < m ; i++ )
            {
                for ( j = 0 ; j < n ; j++ )
                    {
                        printf("%f ",a[i][j]);
                    }
                printf("\n");
            }
        for ( i = 0 ; i < m ; i++ )
            {
                rsum = 0.0;
                for ( j = 0 ; j < n ; j++ )
                    {
                        rsum = rsum + a[i][j];
                    }
                printf("Sum of elements in row %d : %f\n",(i+1),rsum );
            }
        printf("\n");
        for ( j = 0 ; j < n ; j++ )
        {
            csum =0.0;
            for ( i = 0 ; i < m ; i++ )
            {
                csum = csum + a[i][j];


            }
            printf("Sum of elements in column %d : %f\n",(j+1),csum);

        }

    }
