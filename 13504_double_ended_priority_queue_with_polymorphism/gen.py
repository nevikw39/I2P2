#!/opt/homebrew/bin/python3

from random import randrange as rand

for _ in range(1 + rand(100)):
    q = 1 + rand(10**5)
    print(q)
    for __ in range(q):
        c = rand(6)
        if c:
            print(c)
        else:
            print(c, rand(-(1 << 31), (1 << 31) - 1))
