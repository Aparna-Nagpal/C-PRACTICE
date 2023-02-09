/*
Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.
Input Format
The first line contains an integern , the size of the array.
The second line contains n space-separated integers that describe arr[n].
Output Format
Print the following 3 lines, each to 6 decimals:
1.proportion of positive values
2.proportion of negative values
3.proportion of zeros
*/

int main(){
    int a,z=0,p=0,n=0,i;
        scanf("%d",&a);
        int c[a];
        for(i=0;i<a;i++)
        {
            scanf("%d",&c[i]);
        }
        for(i=0;i<a;i++)
        {
            if(c[i]<0)
            n++;
            else if(c[i]>0)
            p++;
            else
            z++;
        }
        printf("%f\n%f\n%f\n",(float)p/a,(float)n/a,(float)z/a);
}
