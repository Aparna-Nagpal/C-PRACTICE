"""
VALID PAIR difficulty rating:851
Chef has three socks in his drawer. Each sock has one of 1010 possible colours, which are represented by integers between 11 and 1010. Specifically, the colours of the socks are A, B, and C.
Chef has to wear two socks which have the same colour. Help Chef find out if that is possible or not.
Input Format
The first and only line of the input contains three space-separated integers A, B and C.
Output Format
Print a single line containing the string "YES" if it is possible for Chef to wear two socks with the same colour or "NO" if it is impossible (without quotes). You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
"""
a,b,c=map(int,input().split())
if(a==b or b==c or c==a):
    print("yes")
else:
    print("no")
