#!/opt/homebrew/bin/python3

from random import randrange as rand

n = 1 + rand(10**6)
print(n)
print(' '.join(str(rand(10**6)) for _ in range(n)))
print(rand(1 << 31))
