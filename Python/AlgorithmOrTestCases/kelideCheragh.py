n = int(input())
numbers = [0] * n
for i in range(n):
    numbers[i] = int(input())
sumOfChanges = 0
goer = 5
for i in numbers:
    if goer != i:
        sumOfChanges += 1
        goer = i
print(sumOfChanges - 1)

# solved
