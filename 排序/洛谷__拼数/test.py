import itertools
from itertools import permutations
n = int(input())
arr = input().split()
permutations1 = list(itertools.permutations(arr))
max_num = float("-inf")
for permutation in permutations1:
    num_str = ''.join(permutation)
    num = int(num_str)
    if num > max_num:
        max_num = num
print(max_num)
    
