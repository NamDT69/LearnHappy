def number(n):
    i = 0
    while  i < n:
        j = i
        i += 1
        if j % 7 == 0:
            yield j
# n = int(input())
for x in number(100):
    print(x)
