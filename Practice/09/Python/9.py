h1, m1 = [int(i) for i in input("Введите время встречи №1 ").split(':')]
h2, m2 = [int(i) for i in input("Введите время встречи №2 ").split(':')]

if(abs(h2 - h1) == 0 and abs(m1 - m2) <= 15):
    print("Встреча состоится")
else:
    print ("Встреча не состоится")