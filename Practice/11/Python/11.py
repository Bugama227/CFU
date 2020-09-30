def getPow(n, power):
    if(n == 0):
        print('Недопустимый ввод')
        return 'Ошибка'

    if(power == 0):
        return 1
    else:
        i = 0
        buff = 1
        while(i < n):
            sum *= n
        if(power < 0):
            return 1 / sum
        else:
            return buff

n = float(input("Введите число для возведения в степень "))
power = int(input("Введите степень числа "))

print(f"{n} в степени {power} = {pow(n, power)}")