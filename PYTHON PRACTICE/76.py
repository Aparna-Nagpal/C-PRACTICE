"""
ID AND SHIP difficulty rating:847
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.
Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.
Output Format
For each test case, display the Ship Class depending on ID, in a new line.
"""
t=int(input())
while(t>0):
    t=t-1
    a=input()
    if(a=='b' or a=='B'):
        print("BattleShip")
    elif(a=='c' or a=='C'):
        print("Cruiser")
    elif(a=='d' or a=='D'):
        print("Destroyer")
    else:
        print("Frigate")
