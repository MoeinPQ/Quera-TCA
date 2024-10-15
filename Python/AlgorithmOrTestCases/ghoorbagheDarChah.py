# import numpy

t = int(input())
a = [0] * t
b = [0] * t
h = [0] * t
for i in range(t):
    a[i], b[i], h[i] = [int(x) for x in input().split()]
for i in range(t):
    if a[i] >= h[i]:
        print(1)
    else:
        l = a[i] - b[i]
        if (h[i] - a[i]) % l == 0:
            print(((h[i] - a[i]) // l) + 1)
        else:
            print(((h[i] - a[i]) // l) + 2)

# solved
