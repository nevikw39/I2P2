#!/usr/bin/python3

import random
import string

print(''.join(random.choice(string.ascii_lowercase) for _ in range(1 + random.randrange(5000))))
