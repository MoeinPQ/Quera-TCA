t = int(input())
numbers = [0] * t

numbers = [int(x) for x in input().split()]
sumL = 0
sumR = 0
ListL = [0] * t
ListR = [0] * t
changerL = numbers[0]
changerR = numbers[0]
for i in range(t):
    # first left one
    if i == 0:
        changerL -= 3
        changerR += 3
        continue
    ListL[i] = changerL - numbers[i]
    sumL += abs(ListL[i])
    if ListL[i] > 0:
        ListL[i] = ("+" + str(ListL[i]))
    changerL -= 3

    ListR[i] = changerR - numbers[i]
    sumR += abs(ListR[i])
    if ListR[i] > 0:
        ListR[i] = ("+" + str(ListR[i]))
    changerR += 3

if sumR > sumL:
    for i in range(t):
        print(ListL[i], end="\n")
else:
    for i in range(t):
        print(ListR[i], end="\n")

# solved
