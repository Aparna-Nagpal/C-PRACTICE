/*
NO TIME TO WAIT difficulty rating:932
Only x hours are left for the March Long Challenge and Chef is only left with the last problem unsolved. However, he is sure that he cannot solve the problem in the remaining time. From experience, he figures out that he needs exactly H hours to solve the problem.
Now Chef finally decides to use his special power which he has gained through years of intense yoga. He can travel back in time when he concentrates. Specifically, his power allows him to travel to N different time zones, which are T1,T2…,TN hours respectively behind his current time.
Find out whether Chef can use one of the available time zones to solve the problem and submit it before the contest ends.
Input
The first line of the input contains three space-separated integers N,H and x.
The second line contains N space-separated integers T1,T2,…,TN.
Output
Print a single line containing the string "YES" if Chef can solve the problem on time or "NO" if he cannot.
*/
#include <iostream>
using namespace std;

int main() {
	int n,h,x,i,f=0;
	cin>>n>>h>>x;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	if(a[i]==h-x)
	{
	    f=1;
	    break;
	}
	if(f==1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	return 0;
}
