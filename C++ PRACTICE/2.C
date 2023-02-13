/*
Input Format
You will be given two positive integers, a and b (a<=b), separated by a newline.

Output Format
For each integer  in the inclusive interval [a,b]:
If ,1<=n<=9 then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
*/
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b,i;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i<=9)
        {
            if(i==1)
            cout<<"one";
            else if(i==2)
            cout<<"two";
            else if(i==3)
            cout<<"three";
            else if(i==4)
            cout<<"four";
            else if(i==5)
            cout<<"five";
            else if(i==6)
            cout<<"six";
            else if(i==7)
            cout<<"seven";
            else if(i==8)
            cout<<"eight";
            else if(i==9)
            cout<<"nine";       
        }
        else
        {
            if(i%2==0)
            cout<<"even";
            else
            cout<<"odd";
        }
        printf("\n");
    }
    return 0;
}
