a, operator, b = input("Введите ваше выражение \n").split(' ')
a, b = float(a), float(b)

if(operator == '+'):
    print(a + b)
elif(operator == "-"):
    print(a - b)
elif(operator == "*"):
    print(a * b)
else:
    if(b == 0):
        print("На ноль делить нельзя")
    else:
        print(a / b)
