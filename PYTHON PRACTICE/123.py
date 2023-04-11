"""
CHEF AND TABLE TENNIS difficulty rating:1085
Chef likes to play table tennis. He found some statistics of matches which described who won the points in order. A game shall be won by the player first scoring 11 points except in the case when both players have 10 points each, then the game shall be won by the first player subsequently gaining a lead of 2 points. Could you please help the Chef find out who the winner was from the given statistics? (It is guaranteed that statistics represent always a valid, finished match.)
Input
The first line of the input contains an integer T, denoting the number of test cases. The description of T test cases follows. Each test case consist a binary string S, which describes a match. '0' means Chef lose a point, whereas '1' means he won the point.
Output
For each test case, output on a separate line a string describing who won the match. If Chef won then print "WIN" (without quotes), otherwise print "LOSE" (without quotes).
"""
t=int(input())
while(t>0):
    t=t-1
    s=input()
    c=s.count("1")
    o=s.count("0")
    if(c==s and c==10):
        for i in s:
            if(i=='0'):
                m=m+1
            else:
                n=n+1
            if(abs(n-m)>=2):
                if(n>m):
                    print("WIN")
                else:
                    print("LOSE")
                break
    else:
        if(c>o):
            print("WIN")
        else:
            print("LOSE")
