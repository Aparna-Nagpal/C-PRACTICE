/*
HOW MANY UNATTEMPTED PROBLEMS difficulty rating:264
Our Chef is currently practicing on CodeChef and is a beginner. The count of ‘All Problems’ in the Beginner section is X. Our Chef has already ‘Attempted’ Y problems among them. How many problems are yet ‘Un-attempted’?

Input Format
The first and only line of input contains two space-separated integers X and Y — the count of 'All problems' in the Beginner's section and the count of Chef's 'Attempted' problems, respectively.
Output Format
Output a single integer in a single line — the number of problems that are yet 'Un-attempted'
*/
#include <stdio.h>

int main(void) {
	int a,b;
	    scanf("%d%d",&a,&b);
	    printf("%d\n",a-b);
	
	return 0;
}
