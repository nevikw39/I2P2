#!/usr/bin/python3

import random
import typing

try:
    x = int(input())
except:
    x = 10

for _ in range(10):
    d = random.randrange(10**4)
    if x < 2:
        lst = [random.randrange(2, 10**9) for _ in range(d + 1)]
        print(d, ' '.join(str(i) for i in lst))
        d = random.randrange(d + 1)
        print(d, ' '.join(str(random.choice([lst[len(lst) - (d + 1) + i] - 1, random.randrange(1, lst[len(lst) - (d + 1) + i])])) for i in range(d + 1)))
    elif x < 5:
        a = [random.randrange(1, 10**9) for _ in range(d + 1)]
        print(d, ' '.join(str(i) for i in a))
        d = random.randrange(d + 1)
        b = [random.choice([a[len(a) - (d + 1) + i] - 1, a[len(a) - (d + 1) + i], random.randrange(0, a[len(a) - (d + 1) + i] + 1)]) for i in range(d + 1)]
        while not b[0]:
            b[0] = random.choice([a[len(a) - (d + 1) + 0] - 1, a[len(a) - (d + 1) + 0], random.randrange(0, a[len(a) - (d + 1) + 0] + 1)])
        print(d, ' '.join(str(i) for i in b))
    else:
        a = [random.randrange(-10**9, 10**9) for _ in range(d + 1)]
        b = [random.choice([a[i] - 1, a[i], a[i] + 1, -a[i] - 1, -a[i], -a[i] + 1, random.randrange(-10**9, 10**9)]) for i in range(random.choice([d+ 1, random.randrange(d + 1) + 1]))]
        while not a[-1]:
            a[-1] = random.randrange(-10**9, 10**9)
        while not b[-1]:
            b[-1] = random.choice([a[len(b) - 1] - 1, a[len(b) - 1], a[len(b) - 1] + 1, -a[len(b) - 1] - 1, -a[len(b) - 1], -a[len(b) - 1] + 1, random.randrange(-10**9, 10**9)])
        if random.randrange(2):
            a, b = b[::-1], a[::-1]
        else:
            a, b = a[::-1], b[::-1]
        print(len(a) - 1, ' '.join([str(i) for i in a]))
        print(len(b) - 1, ' '.join([str(i) for i in b]))
    print()
