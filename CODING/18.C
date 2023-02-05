/*
THIEF AND COPS
There are 100 houses located on a straight line. The first house is numbered 1 and the last one is numbered 100. Some M houses out of these 100 are occupied by cops. Thief Raj has just stolen Ayush's bag and is looking for a house to hide in. Ayush uses fast 4G Internet and sends the message to all the cops that a thief named Raj has just stolen her bag and ran into some house.
Raj knows that the cops run at a maximum speed of x houses per minute in a straight line and they will search for a maximum of y minutes. Raj wants to know how many houses are safe for him to escape from the cops. Help him in getting this information.
Input Format
First line contains T, the number of test cases to follow.
First line of each test case contains 3 space separated integers: M, x and y.
For each test case, the second line contains M space separated integers which represent the house numbers where the cops are residing.
Constraints
1 ≤ T ≤ 104
1 ≤ x, y, M ≤ 10
Output Format
For each test case, output a single line containing the number of houses which are safe to hide from cops.

Sample Input 0
3
4 7 8
12 52 56 8
2 10 2
21 75
2 5 8
10 51
Sample Output 0
0
18
9

Sample Input 1
2
2 5 8
10 50
2 8 16
21 71
Sample Output 1
10
0
*/

int main() {
    int t,k=0,i,j,n,c,u,h,v;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        k=0;
        scanf("%d%d%d",&n,&h,&c);
        int a[n],b[100]={0};
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        
        for(i=0;i<100;i++)
        {
            for(j=0;j<n;j++)
            {
                u=a[j]-h*c;
        v=a[j]+h*c;
            if(i+1>=u&&i+1<=v)
                    b[i]=1000;
            }
        }
        for(i=0;i<100;i++)
        {
            if(b[i]==0)
                k++;
        }
        printf("%d\n",k);
    } 
    return 0;
}
