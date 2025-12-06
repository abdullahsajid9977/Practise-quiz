#include <stdio.h>
#include <conio.h>
int main()
{
    int n,i,photos,total,money;
    printf ("number of events");
    scanf("%d",&n);
    
    total=0;
    for(i=1; i<=1; i++)
    {
        printf("event photos");
        scanf("%d",&photos);
        money=photos*50;
        if (photos>300)
        money=money-(money*8/100);
        printf("Per event=%d rs",money);
        total=total+money;
    }
    printf("\ntotal income = %drs",total);
    return 0;
}