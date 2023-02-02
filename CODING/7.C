/*
READ PAGES difficulty rating:343
Chef has started studying for the upcoming test. The textbook has N pages in total. Chef wants to read at most X pages a day for Y days.
Find out whether it is possible for Chef to complete the whole book.
*/
#include <stdio.h>

int main(void) {
    int t,n,x,y;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d%d%d",&n,&x,&y);
        if(x*y>=n)
        printf("yes");
        else
        printf("no");
        printf("\n");
    }

	return 0;
}

