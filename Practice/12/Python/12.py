def factorial(n):
    if(n == 0):
        return 0
    i = 1
    sum = 1
    while(i <= n):
        sum *= i
        i += 1
    return sum

n = int(input("Введите число для факториала"))

print(f"Факториал {n} = {factorial(n)}")