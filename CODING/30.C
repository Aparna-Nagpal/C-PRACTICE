/*
PERMUTATION AND MODULUS
The first line will contain T, number of test cases. Then the test cases follow.
Each test case consists of a single line of input, an integer N, the length of the required permutation.
Output Format
For each test case, output on a new line, N space-separated integers, denoting the permutation P of length N satisfying the above conditions.
INPUT SAMPLE               OUTPUT SAMPLE
2                            2 1 
2                            2 3 1
3 
*/
#include <stdio.h>

int main(void) {
	int t,a,i;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d",&a);
	    int k=2;
	    for(i=0;i<a-1;i++)
	    {
	        if(k<=a)
	        printf("%d ",k++);
	        else
	        break;
	    }printf("1\n");
	}
	return 0;
}
