n = int(input())

while n != 0:
    g = [-1] * n
    s = []
    for i in range(n):
        for j in range(i, n, i + 1):
            g[j] *= -1

        if g[i] > 0:
            s.append(i + 1)
            
    print(*s)
    n = int(input())