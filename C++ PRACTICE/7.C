/*
CHEF AND PRICE CONTROL difficulty rating:931
Chef has N items in his shop (numbered 1 through N); for each valid i, the price of the i-th item is Pi .Since Chef has very loyal customers, all N items are guaranteed to be sold regardless of their price.
However, the government introduced a price ceiling K, which means that for each item i such that Pi>K, its price should be reduced from Pi  to K.
Chef's revenue is the sum of prices of all the items he sells. Find the amount of revenue which Chef loses because of this price ceiling.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers P1,P2,......PN .
Output
For each test case, print a single line containing one integer ― the amount of lost revenue.
*/
#include <iostream>
using namespace std;

int main() {
	int t,p,i,n,k;
    cin>>t;
    while(t>0)
    {
        t--;
        p=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]>k)
            p=p+a[i]-k;
        }
        cout<<p<<endl;
    }
	return 0;
}
