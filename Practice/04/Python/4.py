def two_var_swap(a, b) :
    a = a + b
    b = a - b
    a = a - b
    return (a, b)

def three_var_swap(a, b) :
    c = b
    b = a
    a = c
    return (a, b)

a = (float(input()))
b = (float(input()))

print(two_var_swap(a, b))
print(three_var_swap(a, b))

#a, b = b, a