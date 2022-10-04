/* PROGRAM TO PRINT A ONE MONTH CALENDAR*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,start;/*variabless for month,counter,starting day*/
    printf("enter the nuber of days in a month you want to see it calender : ");
    scanf("%d",&n);
    printf("sun=1....sat=7\n");
    printf("enter startng day of the month you enterd : ");
    scanf("%d",&start);
    printf("\n");
    printf("\n");
    printf("SUN\tMON\tTUE\tWED\tTHUR\tFRI\tSAT\n");
    printf("===\t===\t===\t===\t====\t===\t===\n");
    for(i=1; i<start; i++)
    {
        printf("        ");
    }
    for(i=1; i<=n; i++)
    {
        printf("%2d\t",i);
        if((i+start-1)%7==0)
        {
            printf("\n");
        }
    }
    printf("\n");
    printf("\n");
    printf("\n");

    system("pause");
    return 0;
}
