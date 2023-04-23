"""
AAA{ADD ALTERNATE ALPHABET}
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.
Return the merged string.
Input Format:@ string of length greater than 0
Constraints:1 <= word1.length, word2.length <= 100 word1 and word2 consist of lowercase English letters.
Output Format:Combine string
Sample Input 0:word1 = "abc", word2 = "pqr"
Sample Output 0:"apbqcr"
Explanation 0:The merged string will be merged as so: word1: a b c word2: p q r merged: a p b q c r
Sample Input 1:word1 = "abcd", word2 = "pq"
Sample Output 1:"apbqcd"
Explanation 1:Notice that as word1 is longer, "cd" is appended to the end. word1: a b c d word2: p q merged: a p b q c d
"""
a,b=input().split(',')
i,j=a.split('=')
k,l=b.split('=')
j=eval(j)
l=eval(l)
z=j+l
n=len(z)
p=len(j)
q=len(l)
h=''
m=min(p,q)
g=0
t=0
for i in range(2*m):
    if(i%2==0):
        h=h+j[g]
        g=g+1
    else:
        h=h+l[t]
        t=t+1
for i in j:
    if i not in h:
        h=h+i
for j in l:
    if j not in h:
        h=h+j
print('"'+h+'"')
