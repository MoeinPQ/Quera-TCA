from sys import exit

t = 5
a, b, c, d, e = [int(x) for x in input().split()]
mountOfTruth = [True] * 10


def trianglePossible(x, y, z):
    if x + y <= z:
        return False
    elif x + z <= y:
        return False
    elif y + z <= x:
        return False
    return True


mountOfTruth[0] = trianglePossible(a, b, c)
mountOfTruth[1] = trianglePossible(a, b, d)
mountOfTruth[2] = trianglePossible(a, b, e)
mountOfTruth[3] = trianglePossible(a, c, d)
mountOfTruth[4] = trianglePossible(a, c, e)
mountOfTruth[5] = trianglePossible(a, d, e)
mountOfTruth[6] = trianglePossible(b, c, d)
mountOfTruth[7] = trianglePossible(b, c, e)
mountOfTruth[8] = trianglePossible(b, d, e)
mountOfTruth[9] = trianglePossible(c, d, e)

for e in mountOfTruth:
    if e == True:
        print("YES")
        exit(0)
print("NO")


