#!/opt/homebrew/bin/python3

import sys


def cmp(l, r) -> int:
    return (l > r) - (l < r)


for i in sys.stdin:
    s, t, n = i.split()
    n = int(n)
    print(cmp(s, t),
          cmp(s[:n], t[:n]),
          cmp(s, t[-1]),
          cmp(s[0], t),
          cmp(s[n], t[-1]),
          cmp(s[0], t[n]),
          cmp(s[-1], t[0]))
