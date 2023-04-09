/*
CODECHEF AIRLINES difficulty rating:475
Chef has opened a new airline. Chef has 10 airplanes where each airplane has a capacity of X passengers.
On the first day itself, Y people are willing to book a seat in any one of Chef's airplanes.
Given that Chef charges Z rupees for each ticket, find the maximum amount he can earn on the first day.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of three space-separated integers X,Y, and Z — the capacity of each airplane, the number of people willing to book a seat in any one of Chef's airplanes on the first day, and the cost of each seat respectively.
Output Format
For each test case, output on a new line, the maximum amount Chef can earn on the first day.
*/
#include <iostream>
using namespace std;

int main() {
	int t,o,n,p;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>n>>o>>p;
	    if(o<=n*10)
	    cout<<o*p<<endl;
	    else
	    cout<<n*10*p<<endl;
	}
		return 0;
}
