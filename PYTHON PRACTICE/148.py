"""
INTRODUCTION TO SETS
A set is an unordered collection of elements without duplicate entries.
When printed, iterated or converted into a sequence, its elements will appear in an arbitrary order.
Function Description
Complete the average function in the editor below.
average has the following parameters:
int arr: an array of integers
Returns
float: the resulting float value rounded to 3 places after the decimal
"""
def average(array):
    l=set(array)
    a=sum(l)
    b=len(l)
    return(a/b)
    
    # your code goes here
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)
