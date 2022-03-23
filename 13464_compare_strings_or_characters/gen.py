#!/opt/homebrew/bin/python3

import random
import string

def f():
    return ''.join(random.choice(string.ascii_lowercase) for _ in range(1 + random.randrange(5000)))

for _ in range(1 + random.randrange(100)):
    s = f()
    t = f()
    print(s, t, random.choice(range(min(len(s), len(t)))))
