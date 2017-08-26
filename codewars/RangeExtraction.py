def solution(args):
    intlen = len(args) - 1
    output = ''
    sign = 0
    num = 0
    for i in range(0, intlen):
        if (abs(args[i] - args[i+1]) > 1 ):
            if (num > 1):
                output += '-' + str(args[i]) + ','
            else :
                if (sign == 1):
                    output += ',' + str(args[i]) + ','
                else:
                    output += str(args[i]) + ','
            if (i  == (intlen - 1)):
                output += str(args[i+1])
            num = 0
            sign = 0
        else:
            num+=1
            if (sign == 0):
                output += str(args[i])
                sign = 1
            if (i == (intlen - 1)):
                if (num < 1):
                    output += ',' + str(args[i + 1])
    if (num > 1):
        output += '-' + str(args[i+1])
    return output

s = [-6,-3-1,3-5,7-11,14,15,17,18,19,20]
a = solution(s)
print a
# def test(args, a, i):
#     intlen = len(args)
#     if (i > intlen | abs(args[i] - args[i + 1]) > 1):
#         return a.extend([args[i]])
#     else:
#         i+=1
#         test(args[i], a, i)
#
# a = [1,2,3,6]
