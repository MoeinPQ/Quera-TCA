x1 , x2 = [int(x) for x in input().split()]
if x1 == x2:
    print("Saal Noo Mobarak!")
distant = x2 - x1
result = ""
if distant > 0:
    for i in range(distant):
        result += "R"
else:
    for i in range(abs(distant)):
        result += "L"
print(result)