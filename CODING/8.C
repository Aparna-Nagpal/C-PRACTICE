/*
FEVER difficulty rating:348
Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be X °F.
A person is said to have fever if his body temperature is strictly greater than 98 °F.
Determine if Chef has fever or not.
*/

#include <stdio.h>

int main(void) {
	int t,c;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&c);
	    
	    if(c>98)
	    printf("yes\n");
	    else
	    printf("no\n");
	    
	}
	return 0;
}
