
def exp_sum(n):
    if (n<0):
        return 0
    f = init()
    return int(f[n])

def init():
    f = []
    f.insert(0,1)
    for i in range(1,5000):
        f.insert(i, 0)
        j=1
        while(j):
            t = i - j * (3 * j - 1) / 2
            tt = i - j * (3 * j + 1) / 2
            if (j&1):
                flag = 1
            else:
                flag = -1
            if (t < 0 and tt < 0):
                break
            if (t >= 0):
                f[i] = (f[i] + flag * f[t])
            if (tt >= 0):
                f[i] = (f[i] + flag * f[tt])
            j+=1
    return f


a = exp_sum(199)
print a


#perfect solution
#
# def exp_sum(n):
#   if n < 0:
#     return 0
#   dp = [1]+[0]*n
#   for num in xrange(1,n+1):
#     for i in xrange(num,n+1):
#       dp[i] += dp[i-num]
#   return dp[-1]