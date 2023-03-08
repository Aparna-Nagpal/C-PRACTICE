/*
FIND DIGITS
Input Format
The first line is an integer, t, the number of test cases.
The  subsequent t lines each contain an integer,n
Sample Input
2
12
1012
Sample Output
2
3.
*/
int main()
{
    int t,a,l,n,k;
    scanf("%d",&t);
    while(t>0)
    {
        t=t-1;
        scanf("%d",&a);
        l=a;
        n=0;
        while(l>0)
        {
            k=l%10;
            
            if(k!=0 && a%k==0)
            {
            n=n+1;
            }
            l=l/10;
        }
        printf("%d\n",n);
    }
}
