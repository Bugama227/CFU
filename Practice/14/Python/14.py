def powOfTwo(n):
    count = 1
    buff = 1
    
    while(1):
        buff *= 2
        
        if(buff <= n):
            count += 1
        else:
            break
    
    return(count)

n = int(input("Input number to check "))

print(powOfTwo(n))
