/*
THREE NUMBERS
Chef has three numbers A,B, and C.
He can do the following type of operation:
Select two numbers amongst A,B, and C;
Add 1 to the selected numbers;
Subtract 1 from the remaining number.
Determine whether Chef can make all the three numbers equal after applying the above operation any number of times.
If yes, output the minimum number of operations required by Chef.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of single line containing 3 space-separated integers A,B, and C.
Output Format
For each test case, output −1 if the numbers cannot be made equal, else output the minimum number of operations required to make them equal.
*/
#include <stdio.h>

int main(void) {
	int t,i,temp,j;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    int a[3];
	    for(i=0;i<3;i++)
	    scanf("%d",&a[i]);
	    for(i=1;i<3;i++)
	    {
	        temp=a[i];
	        for(j=i-1;j>=0;j--)
	        {
	            if(a[j]>temp)
	            a[j+1]=a[j];
	            else
	            break;
	        }a[j+1]=temp;
	    }
	    if(a[0]+a[1]>=a[2])
	    {
	        if(a[1]==a[0]&&a[1]==a[2])
	        printf("0\n");
	        else
	         printf("-1\n");
	    }
	   
	    else
	    {
	        if(a[1]!=a[0])
	        {
	            l=a[1]-a[0];
	            a[2]=a[2]+l;
	        }
	        else
	         printf("%d\n",(a[2]-(a[0]+a[1]))*2);
	    }
	    
	}
		return 0;
}

