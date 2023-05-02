"""
TAX SLABS difficulty rating:1406
In India, every individual is charged with income tax on the total income each year. This tax is applied to specific ranges of income, which are called income tax slabs. The slabs of income tax keep changing from year to year. This fiscal year (2020-21), the tax slabs and their respective tax rates are as follows:
Total income (in rupees)	Tax rate
up to Rs. 250,000	0%
from Rs. 250,001 to Rs. 500,000	5%
from Rs. 500,001 to Rs. 750,000	10%
from Rs. 750,001 to Rs. 1,000,000	15%
from Rs. 1,000,001 to Rs. 1,250,000	20%
from Rs. 1,250,001 to Rs. 1,500,000	25%
above Rs. 1,500,000	30%
You are given Chef's total income: N rupees (Rs.). Find his net income. The net income is calculated by subtracting the total tax (also called tax reduction) from the total income. Note that you do not need to worry about any other kind of tax reductions, only the one described above.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print a single line containing one integer — Chef's net income.
"""
t=int(input())
while(t>0):
    t=t-1
    s=0
    a=[]
    n=int(input())
    if(n<=250000):
        pass
    elif(n>=250001 and n<=500000):
        s=(n-250000)*0.05
    elif(n>=500001 and n<=750000):
        s=250000*0.05+(n-500000)*0.1
    elif(n>=750001 and n<=1000000):
        s=250000*0.05+250000*0.1+(n-750000)*0.15
    elif(n>=1000001 and n<=1250000):
        s=250000*0.05+250000*0.1+250000*0.15+(n-1000000)*0.2
    elif(n>=1250001 and n<=1500000):
        s=250000*0.05+250000*0.1+250000*0.15+250000*0.2+(n-1250000)*0.25
    elif(n>1500000):
        s=250000*0.05+250000*0.1+250000*0.15+250000*0.2+250000*0.25+(n-1500000)*0.3
    print(int(n-s))
