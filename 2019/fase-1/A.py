import sys

n = int(input())
min_he = min_me = sys.maxsize
max_hs = max_ms = -sys.maxsize
while(n):
    he,me,hs,ms = map(int, input().split())
    if(he*60 + me < min_he*60+min_me):
        min_he, min_me = he, me
    if(hs*60 + ms > max_hs*60+max_ms):
        max_hs, max_ms = hs, ms
    
    n -= 1

final = max_hs*60+max_ms
inicial = min_he*60+min_me

res = final - inicial
print(res)