"""
MAGICIAN VERSUS CHEF
When Chef was visiting a fair in Byteland, he met a magician. The magician had N boxes (numbered 1 through N) and a gold coin. He challenged Chef to play a game with him; if Chef won the game, he could have the coin, but if he lost, the magician would kidnap Chef.
At the beginning of the game, the magician places the gold coin into the X-th box. Then, he performs S swaps. To win, Chef needs to correctly identify the position of the coin after all swaps.
In each swap, the magician chooses two boxes A and B, moves the contents of box A (before the swap) to box B and the contents of box B (before the swap) to box A.
Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains three space-separated integers N, X and S.S lines follow. Each of these lines contains two space-separated integers A and B denoting a pair of swapped boxes.
Output
For each test case, print a single line containing one integer — the number of the box containing the gold coin after all swaps are performed.
"""
t=int(input())
while(t>0):
    t=t-1
    n,x,s=map(int,input().split())
    for i in range(1,s+1):
        a,b=map(int,input().split())
        if(a==x):
            x=b
        elif(b==x):
            x=a
    print(x)
