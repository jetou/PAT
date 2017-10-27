def gcd(a, b):
    if b == 0:return a
    return gcd(b, a % b)

def gcds(several, n):
    a = several[0]
    b = several[1]
    c = gcd(a, b)
    for i in range(2, n):
        c = gcd(c, several[i])
    return c

def solution(a):
    if len(a) < 2:
        return a[0]
    return gcds(a, len(a)) * len(a)

a = solution([9])
print a