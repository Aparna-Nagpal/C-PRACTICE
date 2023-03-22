"""
AVOID SQUARES PLEASE
You are given an integer N.
Print a permutation P of [1,2,…,N] such that the following condition holds:
For any index i (1≤i<N), 
Pi×Pi+1is not a perfect square.
If there are multiple correct answers, you may print any of them.
Note: A permutation of [1,2,…,N] is a rearrangement of those numbers.
Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains an integer N - the length of the required permutation.
Output Format
For each test case, print N space-separated integers representing the valid permutation on a single line.
If there are multiple correct answers, you may print any of them.
"""
t=int(input())
while(t>0):
    t=t-1
    a=int(input())
    for i in range(1,a+1):
        print(i,end=' ')
    print()
