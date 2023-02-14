/*
FIRST AND LAST difficulty rating:932
You are given an array A=[A1,A2,…,AN] of length N.
You can right rotate it any number of times (possibly, zero). What is the maximum value of A1+AN you can get?
Note: Right rotating the array [A1,A2,…,AN] once gives the array [AN,A1,A2,…,AN−1]. For example, right rotating [1,2,3] once gives [3,1,2] and right rotating it again gives [2,3,1].
Input Format
The first line of input will contain a single integer T, denoting the number of test cases. The description of the test cases follows.
The first line of each test case contains a single integer N, denoting the length of array A.
The second line of each test case contains N space-separated integers A1,A2,…,AN — denoting the array A.
Output Format
For each test case, output on a new line the maximum value of A1+AN you can get after several right rotations.
*/
#include <iostream>
using namespace std;

int main() {
	int t,n,i,l;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    l=a[0]+a[n-1];
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]+a[i+1]>l)
	        l=a[i]+a[i+1];
	    }
	    cout<<l<<endl;
	}
	return 0;
}
