from math import sqrt

a = float(input('Введите a = '))
b = float(input('Введите b = '))
c = float(input('Введите c = '))

if (a == 0 and b != 0):
    print(-c / b)
elif (a == 0 and b == 0 and c != 0):
    print('Решений нет')
elif (a == 0 and b == 0 and c == 0):
    print('Решений бесконечно много')
else:
    d = b*b - 4*a*c
    if (d < 0):
        print('Действительных решений нет')
    elif (d == 0):
        print(f'x1 = {(-b + sqrt(d))/ 2*a}')
    else:
        print(f'x1 = {(-b + sqrt(d))/ 2*a}\n')
        print(f'x2 = {(-b - sqrt(d))/ 2*a}\n')