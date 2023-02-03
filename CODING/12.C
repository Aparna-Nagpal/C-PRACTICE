/*
WATER REQUIREMENT difficulty rating 351
Finally, after purchasing a water cooler during the April long challenge, Chef noticed that his water cooler requires 2 liters of water to cool for one hour.
How much water (in liters) would be required by the cooler to cool for N hours?
*/
#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    printf("%d\n",2*a);
	}
	
	return 0;
}

