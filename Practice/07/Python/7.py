from math import sqrt

s = int(input("Площадь через длины(1) или через координаты(2) будем искать?\n"))
flag = True
while(flag):
    if(s == 1):
        a = abs(float(input("Введите длину первой стороны ")))
        b = abs(float(input("Введите длину второй стороны ")))
        c = abs(float(input("Введите длину третьей стороны ")))
        p = (a + b + c) / 2

        if(a + b > c and a + c > b and b + c > a):
            print(f"Площадь треугольника равна {sqrt(p * (p - a) * (p - b) * (p - c))}")
        else:
            print("Такого треугольника нет")

    elif(s == 2):
        x1, y1 = [float(i) for i in input("Введите координаты первой точки ").split(' ')]
        x2, y2 = [float(i) for i in input("Введите координаты первой точки ").split(' ')]
        x3, y3 = [float(i) for i in input("Введите координаты первой точки ").split(' ')]

        print(f"Площадь треугольника равна {abs((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3)) / 2}")
    elif(s == 3):
        flag = False
        break
    else:
        print("Я не знаю, что ты хочешь")