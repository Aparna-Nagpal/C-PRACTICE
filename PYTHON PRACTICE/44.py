"""
HOW MUCH SCHOLARSHIP difficulty rating:1012
The ZCO Scholarship Contest has just finished, and you finish with a rank of R. You know that Rank 1 to Rank 50 will get 100% scholarship on the ZCO exam fee and Rank 51 to Rank 100 will get 50% percentage scholarship on the ZCO exam fee. The rest do not get any scholarship.
What percentage of scholarship will you get ?
Input Format
Input consist of single line of input containing one integer R.
Output Format
Output a single line containing one integer — the percentage of scholarship you will get.
"""
a=int(input())
if(a>=1 and a<=50):
    print("100")
elif(a>=51 and a<=100):
    print("50")
else:
    print("0")
