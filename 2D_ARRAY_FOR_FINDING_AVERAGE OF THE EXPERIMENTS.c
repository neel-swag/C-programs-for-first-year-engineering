 #include <stdio.h>
 #include <conio.h>
 void main()
    {
        float a[4][6],sum=0.0,avg=0.0;
        int i,j;
        printf("Enter the data :\n");
        for ( i = 0 ; i < 4 ; i++ )
            {
                for ( j = 0 ; j < 6 ; j++ )
                    {
                        scanf("%f",&a[i][j]);
                    }
            }
        for ( i = 0 ; i < 4 ; i++ )
            {
                for ( j = 0 ; j < 6 ; j++ )
                    {
                        sum = 0.0;
                        sum = sum + a[i][j];
                    }
                avg = sum;
                avg = avg/6;
                printf("Average of Experiment %d is %f\n",(i+1),avg);
            }
        getch();
    }
