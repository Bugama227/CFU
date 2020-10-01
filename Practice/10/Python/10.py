s, l1, r1, l2, r2 = [int(i) for i in input("Input s, l1, r1, l2, r2 \n").split(' ')]

if(l1 + r2 >= s):
    r2 = max(s - l1, l2)
else:
    l1 = min(s - r2, r1)

if(l1 + r2 == s):
    print(f"x1 = {l1}\nx2 = {r2}")
else:
    print(-1)