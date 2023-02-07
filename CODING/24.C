/*
Sum of Subsequence(MDP2) 1

Program to calculate maximum sum of subsequence in the given array with no adjacent elements
Input Format
Take size of the array from the user
input the array elements.
It should print the maximum sum of subsequence
Sample Input 0
9
1 2 9 4 5 0 4 11 6
Sample Output 0 
Maximum sum is 25
*/

int main() {
    int n,i,e=0,o=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            e=e+a[i];
        else
            o=o+a[i];
    }
    if(e>o)
        printf("Maximum sum is %d",e);
    else
        printf("Maximum sum is %d",o);  
    return 0;
}
