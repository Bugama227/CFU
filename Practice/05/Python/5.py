from math import abs

def acceler(x0, v0, t) :
    return x0 + v0 * t - (G * t * t / 2)

G = 9.8
x0 = float(input())
v0 = float(input())
t = float(input())

print(round(abs(acceler(x0, v0, t) - x0)))