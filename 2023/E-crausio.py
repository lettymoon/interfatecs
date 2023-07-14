l, c, b = [int(n) for n in input().split()]
x, y = [int(n) - 1 for n in input().split()]
smov = input()

p = 0
tam = len(smov)
i = 0

while b > 0 and i < tam:
    if smov[i] == "C" and x >= 1:
        x -= 1
    elif smov[i] == "B" and x < l:
        x += 1
    elif smov[i] == "E" and y >= 1:
        y -= 1
    elif smov[i] == "D" and y < c:
        y += 1

    else:
        p += 1
        
    b -= 1
    i += 1
        
print(x + 1, y + 1, p)












