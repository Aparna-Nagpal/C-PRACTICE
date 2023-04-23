"""
SEARCH LAST AND FIRST
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.
Input Format:Array and target value
Constraints:0 <= nums.length <= 105 -109 <= nums[i] <= 109 nums is a non-decreasing array. -109 <= target <= 109
Output Format:Index value in array of size 2
Sample Input 0:nums = [5,7,7,8,8,10], target = 8
Sample Output 0:[3,4]
Explanation 0:Target element 8 found from index 3 to 4
Sample Input 1:nums = [5,7,7,8,8,10], target = 6
Sample Output 1:[-1,-1]
Explanation 1:target element not found
"""
a,b=input().split(', ')
i,j=a.split('=')
k,l=b.split('=')
j=eval(j)
l=eval(l)
k=[]
n=len(j)
for i in range(n):
    if(j[i]==l):
        k.append(i)
if(len(k)==2):
    print('['+str(k[0])+','+str(k[1])+']')
else:
    if(len(k)==1):
        k.append(-1)
        print(k)
    else:
        print("[-1,-1]")
