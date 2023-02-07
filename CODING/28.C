/*
MONKEY AND BANANA
A Little monkey and his friends from the Zoo of Lviv like banana very much. There are N monkeys in the Zoo. The monkey with number K (1 ≤ K ≤ N) will be happy if he receives at least AK bananas. There are C bananas in all in the Zoo.
The Zoo staff is interested in knowing whether it is possible to make all the N monkeys happy by giving each monkey at least as many bananas as he wants, that is, the Kth monkey should receive at least AK bananas. Each banana can be given to only one monkey.
Print Yes if it is possible and No otherwise.
Input Format
The first line of the input file contains an integer T, the number of test cases.
Each test case consists of exactly 2 lines. The first line of each test case contains two space separated integers N and C, the total number of monkeys and the total number of bananas in the Zoo respectively. The second line contains N space separated integers A1, A2, ..., AN.
For each test case output exactly one line containing the string Yes if it possible to make all monkeys happy and the string No otherwise.
Sample Input 0
2
2 3
1 1
3 7
4 2 2
Sample Output 0
Yes
No
*/

int main() {
    int t,a,b,s,l,i;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        l=0;
        scanf("%d%d",&a,&b);
        for(i=0;i<a;i++)
        {
            scanf("%d",&s);
            l=l+s;
        }
        if(b>=l)
            printf("Yes\n");
        else
            printf("No\n");
    }  
    return 0;
}
