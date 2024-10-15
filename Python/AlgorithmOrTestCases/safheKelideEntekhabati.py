n = int(input())
strings = [""] * n
for i in range(n):
    strings[i] = input()
name = ""
caps = -1
for i in strings:
    if i[0] == 'C':
        caps *= -1
        continue
    if caps == -1:
        name += i
    else:
        name += i.upper()
print(name)

# solved.
