"""
SMALLEST NUMBER OF NOTES difficulty rating:839
Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to computer smallest number of notes that will combine to give Rs. N.
Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
Output
For each test case, display the smallest number of notes that will combine to give N, in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    s=a//100
    a=a%100
    s=s+a//50
    a=a%50
    s=s+a//10
    a=a%10
    s=s+a//5
    a=a%5
    s=s+a//2
    a=a%2
    s=s+a//1
    print(s)
