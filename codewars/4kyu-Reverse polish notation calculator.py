def calc(expr):
    if len(expr) == 0:
        return 0
    words = expr.split(' ')
    stack = []
    for i in words:
        if decide_intorfloat(i):
            stack.append(i)
        else:
            opt = i
            right = stack.pop()
            left = stack.pop()
            a = opteratornumber(left, opt, right)
            stack.append(a)
    if len(stack) > 1:
        return decide_intorfloat(stack[len(stack)-1])
    return stack[0]

def opteratornumber(left, opt, right):
    left = decide_intorfloat(left)
    right = decide_intorfloat(right)
    if  opt == '+':
        return left + right
    elif opt == '-':
        return left - right
    elif  opt == '*':
        return left * right
    else:
        return left / right

def decide_intorfloat(num):
    if isinstance(num, str):
        for i in num:
            if i == '.':
                return float(num)
            elif not i.isdigit():
                return False
        return int(num)
    else:
        return num


a = calc('1 2 3.5')
print a