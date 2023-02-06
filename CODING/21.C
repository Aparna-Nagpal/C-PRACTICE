/*
COMPLETE THE CREDITS difficulty rating:809
In Uttu's college, a semester is said to be a:
Overload semester if the number of credits taken >65.
Underload semester if the number of credits taken <35.
Normal semester otherwise
Given the number of credits X taken by Uttu, determine whether the semester is Overload, Underload or Normal.
*/

#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    if(a>65)
	    printf("Overload");
	    else if(a<35)
	    printf("Underload");
	    else
	    printf("Normal");
	    printf("\n");
	}
	
	return 0;
}

