number = int(input())
checker = False
ripoNumber = 1
for i in range(1, 31):
    if number <= 2 ** i:
        if number == 2 ** i:
            checker = True
        ripoNumber = i
        break
if checker:
    print(ripoNumber)
else:
    print(ripoNumber - 1)
# solved.
