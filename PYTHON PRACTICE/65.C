"""
UTKARSH AND PLACEMENT TESTS difficulty rating:886
Utkarsh is currently sitting for placements. He has applied to three companies named A,B, and C.
You know Utkarsh's order of preference among these 33 companies, given to you as characters first, second, and third respectively (where first is the company he prefers most).
You also know that Utkarsh has received offers from exactly two of these three companies, given you as characters �x and �y.
Utkarsh will always accept the offer from whichever company is highest on his preference list. Which company will he join?
Input Format
•	The first line of input contains a single integer �T, denoting the number of test cases. The description of �T test cases follows.
•	The first line of each test case contains three different space-separated characters: first, second, and third, denoting Utkarsh's order of preference among the three companies.
•	The second line of each test case contains two space-separated characters �x and �y, the companies from which Utkarsh has received offers.
Output Format
For each test case, print one line containing a single character, the company whose offer Utkarsh will accept.
The output is not case sensitive, so if the answer is �A, both �a and �A will be accepted.
"""
t=int(input())
while(t>0):
    t=t-1
    i,j,k=map(str,input().split())
    r,s=map(str,input().split())
    if(i==r or i==s):
        print(i)
    elif(j==r or j==s):
        print(j)
    else:
        print(k)
    
