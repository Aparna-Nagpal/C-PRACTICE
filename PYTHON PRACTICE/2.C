"""
REACH ON TIME difficulty rating:279
Chef has recently moved into an apartment. It takes 30 minutes for Chef to reach office from the apartment.
Chef left for the office X minutes before Chef was supposed to reach. Determine whether or not Chef will be able to reach on time.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single integer X.
Output Format
For each test case, output YES if Chef will reach on time, NO otherwise.
The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.
  """
  x=int(input())
while(x>0):
    x=x-1
    y=int(input())
    if y>=30:
        print("YES")
    else:
        print("NO")
