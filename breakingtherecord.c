#include <stdio.h>
#include <conio.h>
#include <malloc.h>
int main()
{
    int no, counthigh=-1,countlow=-1;
    int i;
    unsigned long * scores, highscore=0, lowscore=999999999;
    printf("How many matched you played: ");
    scanf("%d",&no);
    printf("Enter Number: \n");
    scores = (unsigned long *)malloc(no*sizeof(unsigned long));
    for(i=0 ; i<no ; i++)
    {
        scanf("%lu",scores+i);
        if(highscore < (*(scores+i)))
        {
            highscore = (*(scores+i));
            ++counthigh;
        }

        if(lowscore > (*(scores+i)))
        {
            lowscore = (*(scores+i));
            ++countlow;
        }
        if((*(scores+i))==0 && i==0)
        {
            ++counthigh;
            lowscore=(*(scores+i));
            highscore=(*(scores+i));
        }
    }
    printf("%d %d",counthigh,countlow);
    free(scores);
    getch();
    return 0;
}
