/*
SLEEP DEPRIVATION difficulty rating:348
A person is said to be sleep deprived if he slept strictly less than 7 hours in a day.
Chef was only able to sleep X hours yesterday. Determine if he is sleep deprived or not.
*/

#include <stdio.h>

int main(void) {
	int t,s;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&s);
	    if(s<7)
	    printf("yes");
	    else
	    printf("no");
	    printf("\n");
	}
	return 0;
}
