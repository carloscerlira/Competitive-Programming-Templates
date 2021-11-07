import sys 
sys.setrecursionlimit(10**6)
sys.stdin = open("input.txt", "r")  
from sys import stdin, stdout

import math
inf, floor, ceil = math.inf, math.floor, math.ceil
from collections import defaultdict, Counter, deque
# from sortedcontainers import SortedList
from functools import lru_cache, reduce
from bisect import bisect, bisect_left
from heapq import heapify, heappush, heappop, heappushpop
from itertools import permutations, combinations, product                                                 
from string import ascii_lowercase as abc 

mod = 10**9+7
eps = 1e-5

def print_arr(arr):
    n = len(arr)
    for i in range(n-1):
        stdout.write(str(arr[i])+" ")
    stdout.write(str(arr[-1])+"\n")

def solve(nums):
    print(nums)
    return 

t = int(input())
for _ in range(t):
    line = stdin.readline()
    n, = map(int, line.split(" "))
    line = stdin.readline()
    nums = list(map(int, line.split(" ")))
    print(solve(nums))
