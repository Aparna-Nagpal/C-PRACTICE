"""
  A sorting algorithm A is said to have more time complexity than a sorting algorithm B if it uses more number of comparisons for sorting the same array than algorithm B.
Given that algorithm A uses X comparisons to sort an array and algorithm B uses Y comparisons to sort the same array, find whether algorithm A has more time complexity.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y — the number of comparisons used by algorithms A and B to sort the array respectively.
Output Format
For each test case, output on a new line, YES, if the algorithm A has more time complexity than B and NO otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
  """
  a=int(input())
while(a>0):
    a=a-1
    x,y=map(int,input().split())
    if(x>y):
        print("yes")
    else:
        print("no")
