#!/opt/homebrew/bin/python3

import random
import string

for _ in range(1 + random.randrange(10)):
    n = 1 + random.randrange(10**5)
    k = 1 + random.randrange(n)
    print(n, k)
    s = ""
    while len(s) < n:
        s += random.choice(string.ascii_lowercase) * min(1 + random.randrange(k << 1), n - len(s))
    print(s)
    lst = []
    while len(lst) < n:
        lst += [random.randrange(-(1 << 31), 1 << 31)] * min(1 + random.randrange(k << 1), n - len(lst))
    print(' '.join(str(i) for i in lst))
    lst.clear()
    lst = []
    while len(lst) < n:
        lst += [random.random() * random.randrange(-1989, 9487)] * min(1 + random.randrange(k << 1), n - len(lst))
    print(' '.join(f"{i:.2f}" for i in lst))
