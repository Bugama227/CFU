def acceler(x0, v0, t) :
    return x0 + x0 * t - (G * pow(t, 2) / 2)

G = 9.8
x0 = float(input())
v0 = float(input())
t = float(input())

print(round(acceler(x0, v0, t)))