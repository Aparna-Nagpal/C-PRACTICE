/*
CHEF AND BRAIN SPEED difficulty rating:288
In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of X bits per second above which his calculations are prone to errors. If Chef is currently working at Y bits per second, is he prone to errors?
If Chef is prone to errors print YES, otherwise print NO.
Input Format
The only line of input contains two space separated integers X and Y — the threshold limit and the rate at which Chef is currently working at.
Output Format
If Chef is prone to errors print YES, otherwise print NO.
You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>=b)
	printf("no\n");
	else 
	printf("yes\n");
	return 0;
}


