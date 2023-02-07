/*
PATTERN ONE
Pattern as according to number.
Sample Input 0
3
Sample Output 0
1
2 3
4 5 6 7
*/

int main() {
    int i,j,l=0,k;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        if(j*j<i)
        for(k=0;k<=j;k++)
            printf("%d ",++l);
        else
            for(k=0;k<=j+1;k++)
            printf("%d ",++l);
        printf("\n");
    }
  return 0;
  }
