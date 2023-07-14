def swapWithoutTemp(a, b):
    a = a+b
    b = a-b
    a = a-b
    print(a,b)

a = 10
b = 11
print(a, b)
swapWithoutTemp(a, b)