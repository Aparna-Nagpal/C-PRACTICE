/*
CHEF AND PAIRING SLIPPERS difficulty rating:930
Chef has N slippers, L of which are left slippers and the rest are right slippers. Slippers must always be sold in pairs, where each pair contains one left and one right slipper. If each pair of slippers cost X rupees, what is the maximum amount of rupees that Chef can get for these slippers?
Input Format
The first line contains T - the number of test cases. Then the test cases follow.
The first line of each test case contains three space-separated integers N, L, and X - the total number of slippers, the number of left slippers, and the price of a pair of slippers in rupees.
Output Format
For each test case, output on one line the maximum amount of rupees that Chef can get by selling the slippers that are available.
*/
#include <iostream>
using namespace std;

int main() {
	int t,n,l,x,p,s;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>n>>l>>x;
	    s=n-l;
	    if(s>l)
	    p=l;
	    else
	    p=s;
	    cout<<p*x<<endl;
	    
	}
	return 0;
}
