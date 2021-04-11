import math

#O(VE)
def solve(n, s, edges):
    dis = [math.inf for i in range(n)]
    dis[s] = 0
    for _ in range(n):
        for u, v, w in edges:
            if dis[u] + w < dis[v]:
                dis[v] = dis[u] + w

    return dis

#https://leetcode.com/problems/network-delay-time/discuss/283711/python-bellman-ford-spfa-dijkstra-floyd-clean-and-easy-to-understand