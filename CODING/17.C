/*
SHORTEST ROUTE(STR6)
Write a program to find shortest route in a device to construct the given string.
Given a device having left, right, top, and bottom buttons and an OK button to enter a text from a virtual keypad having alphabets from A–Y arranged in a 5 × 5 grid, as shown below. Find the shortest route in the device to construct a given string if we start from the top-left position in the keypad.
If row difference is negative, we move up i.e. T. If row difference is positive, we move down i.e. B. If column difference is negative, we go left i.e. L. If column difference is positive, we go right i.e. R. To click the character, press OK i.e. M.
Sample Input 0
TECHIE
Sample Output 0
BBBRRRRMTTTMLLMBMRMTRM
*/
int main() {
    char M[5][5],n='A';
    int i,j;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            M[i][j]=n;
            n++;
        }
    }
    char a[1000];
    
    scanf("%[^\n]s",a);
    int x=0,y=0,x1=0,y1=0,f=0;
    
    for(i=0;a[i];i++)
    {
        n=a[i];
        f=0;
        for(int i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(n==M[i][j]){
                    x1=i,y1=j;
                    f=1;
                    break;
                }
            }
        
        if(f==1)
        {
            break;
        }
        
    }
    int k=x1-x;
    int l=y1-y;
    if(k>0)
    {
        while(k--){
            printf("B");
        }
    }
    else
    {
        while(k++)
        {
            printf("T");
            
        }
    }
    if(l>0)
    {
        while(l--){
            printf("R");
        }
    }
    else
    {
        while(l++)
        {
            printf("L");
            
        }
    }
    printf("M");
    x=x1;
    y=y1;

    }
    return 0;
}
