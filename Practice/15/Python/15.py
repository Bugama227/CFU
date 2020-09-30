import random

def guessGame():
    random.seed
    goal = random.randint(1, 100)
    counts = 0

    while(counts < 5):
        buff = int(input("Ваша догадка? "))
        if(buff < goal):
            print("Число больше")
            counts += 1
        elif(buff > goal):
            print("Число меньше")
            counts += 1
        else:
            print (f"Вы угадали. Число {goal}")
            return
    print(f"Вы так и не угадали число. А оно было {goal}")
    return

while(True):
    n = int(input("Вы хотите сыграть(1) или выйти(другое число)? "))

    if (n == 1):
        guessGame()
    else:
        break
