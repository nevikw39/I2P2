#!/usr/bin/python3

from random import randrange as rand

for _ in range(rand(1, 100 + 1)):
    x = rand(1, 10**5)
    print(x, rand(-1, x))
