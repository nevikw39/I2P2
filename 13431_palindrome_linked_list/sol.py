#!/usr/bin/python3

lst = []
try:
    while True:
        input()
        lst.append(list(map(int, input().split())))
except EOFError:
    pass
print(''.join('T' if i == i[::-1] else 'F' for i in lst))

