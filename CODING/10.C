/*
MATH1 ENROLMENT difficulty rating 349
For the upcoming semester, the admins of your university decided to keep a total of X seats for the MATH-1 course. A student interest survey was conducted by the admins and it was found that Y students were interested in taking up the MATH-1 course.
Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking the course would be able to do so.
*/
#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    if(a<=b)
	    printf("%d\n",b-a);
	    else
	    printf("0\n");
	}
	return 0;
}

