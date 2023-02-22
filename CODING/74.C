/*
PASSING MARKS
In a class of N students, a class test was held. The ith student scored Ai marks. It is also known that the scores of all students were distinct.
A student passes the test if their score is strictly greater than the passing mark. Given that exactly X students pass in the test, find the maximum value of the passing mark of the test.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X — the number of students in the class and the number of students that passed in the test.
The next line contains N space-separated integers A1,A2,…,AN,where the ith integer denotes the marks of the ith student.
Output Format
For each test case, output on a new line, the maximum value of the passing mark of the test.
*/
#include <stdio.h>

int main(void) {
    int t,n,x,i,j,temp;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d%d",&n,&x);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=1;i<n;i++)
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
        printf("%d\n",a[n-x]-1);
    }
	// your code goes here
	return 0;
}

