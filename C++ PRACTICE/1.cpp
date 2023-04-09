/*
CONDITIONAL STATEMENTS
Given a positive integer n, do the following:
If 1<=n<=9, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
If n>9,print Greater than 9.
Input Format
A single integer n. .
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=1&&n<=9)
    {
        if(n==1)
        cout<<"one";
        else if(n==2)
        cout<<"two";
        else if(n==3)
        cout<<"three";
        else if(n==4)
        cout<<"four";
        else if(n==5)
        cout<<"five";
        else if(n==6)
        cout<<"six";
        else if(n==7)
        cout<<"seven";
        else if(n==8)
        cout<<"eight";
        else if(n==9)
        cout<<"nine";
    }
    else
    printf("Greater than 9");
    return 0;
}



