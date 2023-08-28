def func(A):
    i = 1
    sum = A
    while(A>0):
        sum += (A//2)*(2**i - int(2**(i-1)))
        A = A//2
        i += 1
    return sum

A, B = map(int,input().split())
print(func(B) - func(A-1))