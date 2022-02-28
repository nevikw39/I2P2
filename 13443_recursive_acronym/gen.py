#!/usr/bin/python3

import random
import string

for _ in range(1 + random.randrange(10)):
    lst = [''.join(random.choice(string.ascii_lowercase) for __ in range(1 + random.randrange(1000))) for _ in range(1 + random.randrange(1000))]
    lst[0] = ''.join(i[0] for i in lst)
    if random.randrange(2):
        if random.randrange(2):
            lst[0] = lst[0][:-1]
        else:
            lst[0] += random.choice(string.ascii_lowercase)
    for i in range(len(lst)):
        s = ""
        for j in lst[i]:
            if random.randrange(2):
                s += j.upper()
            else:
                s += j
        lst[i] = s
    print(' '.join(lst))
