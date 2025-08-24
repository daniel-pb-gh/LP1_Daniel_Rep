n1 = int(input("enter n1: "))
n2 = int(input("enter n2: "))

if (n1 < n2):
    i = (n1 + 1)
    while (i < n2):
        print(i)
        i += 1
else:
    i = (n2 + 1)
    while (i < n1):
        print(i)
        i += 1
