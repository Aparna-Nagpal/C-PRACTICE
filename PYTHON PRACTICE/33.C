"""
Janmansh and Games difficulty rating:772
Janmansh and Jay are playing a game. They start with a number X and they play a total of Y moves. Janmansh plays the first move of the game, after which both the players make moves alternatingly.
In one move, a player can increment or decrement X by 1.
If the final number after performing Y moves is even, then Janmansh wins otherwise, Jay wins. Determine the winner of the game if both the players play optimally.
Input Format
The first line will contain T - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers X, Y - the starting number and the total number of moves respectively.
Output Format
For each test case, output the winning player (Janmansh or Jay).
You may print each character of Janmansh and Jay in uppercase or lowercase (for example, JAY, jaY, JAy will be considered identical).
"""
t=int(input())
while(t>0):
    t=t-1
    x,y=map(int,input().split())
    if((x+y)%2==0):
        print("JANMANSH")
    else:
        print("JAY")
