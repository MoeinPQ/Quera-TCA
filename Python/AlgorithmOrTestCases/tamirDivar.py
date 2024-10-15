x, y = [int(x) for x in input().split()]
r = int(input())
dx, dy = [int(x) for x in input().split()]

if x <= dx <= x+r and y >= dy >= y - r:
    print("Mahdi")
else:
    print("Parsa")
# solved.
