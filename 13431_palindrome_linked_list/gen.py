#!/usr/bin/python3

from random import randrange as rand

N = 10 ** int(input())
for _ in range(rand(1, 10 ** 6 // N)):
    n = rand(1, N)
    print(n)
    p = rand(2)
    if p:
        lst = [str(rand(-2**31, 2**31)) for _ in range(n // 2)]
        if n & 1:
            lst += [str(rand(-2**31, 2**31))] + lst[::-1]
        else:
            lst += lst[::-1]
        print(' '.join(lst))
    else:
        print(' '.join([str(rand(-2**31, 2**31)) for _ in range(n)]))
