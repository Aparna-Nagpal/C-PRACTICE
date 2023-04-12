"""
CRAZY BISHOPS ON CHESSBOARD
Chef has a matrix of size N×N.
There are N bishops placed on the matrix, in a zig-zag fashion, at the cells (1,1),(2,2),(1,3),(2,4),(1,5),…, and so on.
For example, for N=4, the matrix looks like:
Screenshot-2023-04-12-at-1-26-20-AM.png
Your task is to determine the minimum number of moves required to reach a position where each cell (i,i) contains exactly one bishop for all 1≤i≤N.
For the above mentioned case of N=4, the final position should be:
Screenshot-2023-04-12-at-1-32-03-AM.png
Note:
Bishops can only move diagonally. In one move, you can place exactly one bishop from its initial cell to any other cell lying on either of its diagonals.
Bishops cannot move outside the matrix.
No cell can contain more than one bishop at a time.
A bishop cannot jump over another bishop.
Input Format
The first line of input will contain a single integer T - the number of test cases.
Each test case consists of a single integer N - the size of the matrix.
Output Format
For each test case, output a single integer, the minimum number of moves required to reach a position where each cell (i,i) contains exactly one bishop for all 1≤i≤N.
"""
t=int(input())
while(t>0):
    t=t-1
    n=int(input())
    if(n==1):
        print("0")
    elif(n%2==0):
        j=n//2-1
        print(j*3)
    else:
        j=(n//2)*3-1
        print(j)
