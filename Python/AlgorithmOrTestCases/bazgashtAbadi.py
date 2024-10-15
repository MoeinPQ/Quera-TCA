# def recursive(a):
#     if a == 1:
#         return 2
#     elif (a % 2) == 0:
#         l = recursive(a-1)
#         if recursive(a-1) % 2 == 0:
#             return (l // 2) * (l // 2)
#         else:
#             return (l // 2) * ((l // 2) + 1)
#     else:
#         return recursive(a - 1) - 4
#
#
# t = int(input())
# number = [0] * t
# for i in range(t):
#     number[i] = int(input())
# for i in range(t):
#     print(recursive(number[i]))
# f10 = 1 , f11 = -3 , f12 = 2 , f13 = -2
# f14 = 1 , f15 = -3 , f16 = 2 , f17 = -2
t = int(input())
number = [0] * t
for i in range(t):
    number[i] = int(input())
for i in number:
    if i == 1:
        print(2)
        continue
    if i % 2 == 0:
        if i % 4 == 0:
            print(2)
        else:
            print(1)
    else:
        if i % 4 == 3:
            print(-3)
        else:
            print(-2)



