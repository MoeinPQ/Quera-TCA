n, m = [int(x) for x in input().split()]
lineChanger = 0  # for changing odd lines numbers situation.
for i in range(0, n):
    for j in range(0, m):
        if lineChanger % 2 == 0:
            print((i * m) + j + 1, end=" ")
        else:
            print(((i * m) + j + 1)+(m-(2*j+1)), end=" ")
    print("\n", end="")
    lineChanger+=1

    # solved
