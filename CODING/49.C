/*
NON-NEGATIVE NUMBERS difficulty rating:948
Alice has an array of N integers — A1,A2,…,AN.She wants the product of all the elements of the array to be a non-negative integer. That is, it can be either 0 or positive. But she doesn't want it to be negative.
To do this, she is willing to remove some elements of the array. Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first line of each test case contains a single integer N — the number of elements in the array originally.
The next line contains N space-separated integers — A1,A2,…,AN,which are the original array elements.
Output Format
For each test case, output on a new line the minimum number of elements that she has to remove from the array.
*/
#include <stdio.h>

int main(void) {
	int t,k,o,i,l;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    o=0;
	    l=0;
	    scanf("%d",&k);
	    int a[k];
	    for(i=0;i<k;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<k;i++)
	    if(a[i]<0)
	    o++;
	   
	    for(i=0;i<k;i++)
	    if(a[i]==0)
	    l++;
	    if(l!=0)
	    printf("0\n");
	    else
	    printf("%d\n",o%2);
	}
		return 0;
}

