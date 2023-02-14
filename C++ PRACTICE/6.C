/*
AKASH AND MISSING CLASS difficulty rating:931
Akash loves going to school, but not on weekends.
A week consists of 7 days (Monday to Sunday). Akash takes a leave every Saturday.
If a month consists of N days and the first-day of the month is Monday, find the number of days Akash would take a leave in the whole month.
Input Format
First line will contain T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, one integer N - the number of days in the month.
Output Format
For each test case, output in a single line, the number of days Akash would take a leave in the whole month.
*/
#include <iostream>
using namespace std;

int main() {
	int a,t;
	cin>>t;
	while(t>0)
	{
	    t--;
	    cin>>a;
	    if(a==6)
	    cout<<"1"<<endl;
	    else if(a>=7&&a%7==6)
	    cout<<a/7+1<<endl;
	    else
	    cout<<a/7<<endl;
	}
	return 0;
}
