a = float(input("a = "))
b = float(input("b = "))
s = float(input("w/ additional var(1) or w/out(2) = "))

if(s == 1):
    c = b
    b = a
    a = c
elif(s == 2):
    a = a + b
    b = a - b
    a = a - b
else:
    print("Wrong input")

print(f"a = {a}\nb = {b}")