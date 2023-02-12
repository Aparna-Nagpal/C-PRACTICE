/*
CHEF AND SNACKDOWN difficulty rating:895
Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.
SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.
Input Format
The first line contain the number of test-cases T.
The first line of each test-case contains a single integer N.
Output Format
For each test case print a single line containing the string "HOSTED" if SnackDown was hosted in year N or "NOT HOSTED" otherwise (without quotes).
*/
#include <stdio.h>

int main(void) {
	int t,a;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    if(a==2010||a==2015||a==2016||a==2017||a==2019)
	    printf("HOSTED\n");
	    else
	    printf("NOT HOSTED\n");
	}
		return 0;
}

