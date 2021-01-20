//using rand() function
#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    int max;
    int i;

    printf("\n\n\t ENTER MAXIMUM NUMBER : ");
    scanf("%d",&max);

    printf("\n\n\t HOWMANY NUMBER PRINT : ");
    scanf("%d",&n);
    printf("\n\n %d Random number printing \n",n);
    printf("\n\n Random number 0 to %d printing\n\n",max);
    for(i=0;i<n;i++)
            printf("\n Random no %d is : %d",i+1,(rand()%max));
    getch();
}
