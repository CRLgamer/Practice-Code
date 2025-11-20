x = 0
y = 0
temp = 0

while (x < 1000):
    if (x % 3 == 0):
        temp = x
        y = x + y
        x = x + 1
    elif (x % 5 == 0):
        temp = x
        y = x + y
        x = x + 1
    else:
        x = x + 1

print(y)
