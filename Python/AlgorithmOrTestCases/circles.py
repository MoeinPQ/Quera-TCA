n = int(input())
touches = [0] * (2 * n)
centers = [0] * n
radius = [0] * n
for i in range(n):
    centers[i], radius[i] = [int(x) for x in input().split()]
    touches[2 * i - 1] = centers[i] + radius[i]
    touches[2 * i] = centers[i] - radius[i]
for i in range(2 * n):
    for j in range(i + 1):
        if (i+1) == (2 * n):
            continue
        if touches[i + 1] == touches[j]:
            touches[j] = -1996
sum = 0
for i in touches:
    if i != -1996:
        sum += 1
print(sum)
