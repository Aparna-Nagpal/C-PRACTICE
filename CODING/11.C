/*
CHEF AND CHAPTERS difficulty rating : 350
This semester, Chef took X courses. Each course has Y units and each unit has Z chapters in it.
Find the total number of chapters Chef has to study this semester.
*/

#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d",&a,&b,&c);
	    printf("%d\n",a*b*c);
	}
	return 0;
}

