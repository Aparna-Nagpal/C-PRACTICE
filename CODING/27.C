/*
NUMBBER PYRAMID
1
12
123
1234
12345
*/
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            
            printf("%d",j+1);
        }
        printf("\n");
    }
 return 0;
}
