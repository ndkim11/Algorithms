def recur(th_digit):
    if th_digit == digits:
        print(*arr)

    for i in range(1,N+1):
        if len(arr)== 0 or i > arr[-1]:
            arr.append(i)
            recur(th_digit + 1)
            arr.pop()

N, digits = map(int, input().split())
arr = []

recur(0)