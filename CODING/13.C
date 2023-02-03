/*
LUNCHTIME difficulty rating 352
Chef has his lunch only between 1 pm and 4 pm (both inclusive).
Given that the current time is X pm, find out whether it is lunchtime for Chef.
*/
#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    if(a<=4&&a>=1)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

