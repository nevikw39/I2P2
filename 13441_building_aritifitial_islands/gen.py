#!/opt/homebrew/bin/python3

import random
import typing
import heapq

try:
    x = int(input())
except:
    x = 10
if x < 2:
    n = random.randrange(3, 100)
else:
    n = random.randrange(3, 10**5)
print(n)
if 2 <= x < 5:
    w = range(1, 1 + 1)
else:
    w = range(1, 100 + 1)

prufer = [random.randrange(n) for _ in range(n - 2)]

degrees = [1 for _ in range(len(prufer) + 2)]
for i in prufer:
    degrees[i] += 1

leaves = []
for i, e in enumerate(degrees):
    if (e == 1):
        heapq.heappush(leaves, i)

for i in prufer:
    leaf = heapq.heappop(leaves)
    print(leaf, i, random.choice(w))
    degrees[i] -= 1
    if degrees[i] == 1:
        heapq.heappush(leaves, i)
print(heapq.heappop(leaves), len(prufer) + 1, random.choice(w))
