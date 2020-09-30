from math import sqrt

def isPrime(n):
    i = 2
    while(i < n):
        if(n % i == 0):
            return (f"Не простое число {n}, делится на {i} без остатка")
        i += 1
    return ("Prime")

n = int(input("Input number "))

print(isPrime(n))