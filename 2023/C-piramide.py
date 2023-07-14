n, p = input().split()

if p == "maiusculas":
    alfabeto = [chr(i) for i in range(65, 91)]
else:
    alfabeto = [chr(i) for i in range(97, 123)]

s = ["." for i in range(26)]
l = ""
for i in range(int(n)):
    l = alfabeto[i] + l
    
    for i in range(len(l)):
        s[25 - i] = l[i]
        
    print(*s, sep="")