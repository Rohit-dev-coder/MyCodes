#include <stdio.h>
#include <conio.h>
#include <malloc.h>
MAINICON ICON ("g:\\rohit\\download.png");
int main()
{
    int n,i,j=0,count=0;
    int *sqr;
    int day, month;
    printf("Enter Number of squares in the chocolate bar: ");
    scanf("%d",&n);
    printf("Enter Values of squares: ");
    sqr = (int *)malloc(n*sizeof(int));
    for(i=0 ; i<n; i++)
    {
        scanf("%d",sqr+i);
    }
    printf("Enter days and month: \n");
    scanf("%d %d",&day,&month);
    for(i=0 ; i<n; i++)
    {
        if((*(sqr+i)) == month)
        {
             for(; j<n; j++)
             {
                 if((*(sqr+i))+(*(sqr+j))==day)
                 {
                     count++;
                 }
             }
        }


    }
    if(n==1)
        count++;
    printf("%d",count);
    return 0;
}
