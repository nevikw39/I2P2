#!/opt/homebrew/bin/python3

import random

n = 1 + random.randrange(10**6)
print(n)
lst = list(range(n))
random.shuffle(lst)
print(' '.join(str(i) for i in lst))
