"""
PROGRAM YOUR OWN CALCULATOR difficulty rating:1028
Write a program to obtain 2 numbers (A and B) and an arithmetic operator (C) and then design a calculator depending upon the operator entered by the user.
So for example if C="+", you have to sum the two numbers.
If C="-", you have to subtract the two numbers.
If C=" * ", you have to print the product.
If C=" / ", you have to divide the two numbers.
Input:
First line will contain the first number A.
Second line will contain the second number B.
Third line will contain the operator C, that is to be performed on A and B.
Output: Output a single line containing the answer, obtained by, performing the operator on the numbers. 
"""
a=int(input())
b=int(input())
c=input()
if(c=='+'):
    print(a+b)
elif(c=='-'):
    print(a-b)
elif(c=='*'):
    print(a*b)
elif(c=='/'):
    print(a/b)
