/*
FIBONACCI SERIES
*/
int fib(int h,int a,int b)
{
    int p,i;
    for(i=0;i<h;i++)
            {
            p=a+b;
            a=b;
            b=p;
        }
    return(p);
}
void main(){
    int t,a,b,c;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        
        scanf("%d%d%d",&a,&b,&c);
        if(c==0)
            printf("%d\n",a);
        else if(c==1)
            printf("%d\n",b);
        else{
            
            printf("%d\n",fib(c-1,a,b));
        }
        
    }
}

