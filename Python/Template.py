import sys 
sys.stdin = open("input.txt", "r")  
sys.setrecursionlimit(10**6)
from sys import stdin, stdout

import math 
from collections import defaultdict, Counter, deque
from functools import lru_cache
import bisect 
from heapq import heapify, heappush, heappop
from itertools import permutations, combinations

mod = 10**9+7
inf = math.inf 

def solve(nums):
    print(nums)
    return 

t = int(input())
for _ in range(t):
    n = int(input())
    line = stdin.readline()
    nums = list(map(int, line.split(" ")))
    print(solve(nums))