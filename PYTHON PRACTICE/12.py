'''
HACKERMAN difficulty rating:643
Hackerman wants to know who is the better player between Bob and Alice with the help of a game.
The game proceeds as follows:
First, Alice throws a die and gets the number A
Then, Bob throws a die and gets the number B
Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.
Given A and B, determine who wins the game.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers A and B.
Output Format
For each test case, output on a new line the winner of the game: Alice or Bob.
Each letter of the output may be printed in either uppercase or lowercase, i.e, Alice, ALICE, AlIce and aLIcE will all be considered equivalent.
  '''
  t=int(input())
while(t>0):
    t=t-1
    a,b=map(int,input().split())
    if(a+b==2 or a+b==3 or a+b==5 or a+b==7 or a+b==11):
        print("ALICE")
    else:
        print("BOB")
