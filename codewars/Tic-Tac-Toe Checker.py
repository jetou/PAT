def isSolved(board):
    result = 0
    a = {0:-1, 1:'X',2:'O'}
    number = judgeline(board)
    number2 = judgelow(board)
    number3 = judgebevel(board)
    result = max(number,number2,number3)
    if (result == 0):
        for i in board:
            if 0 in i:
               return a[result]
        return 0
    return a[result]
def judgeline(board):
    for i in board:
        temp = set(i)
        if(len(temp) == 1 and i[0] != 0):
            return i[0]
    return 0

def judgelow(board):
    c = []
    for i in board:
        c.extend(i)
    strlen = len(board)
    for i in range(0, strlen):
        temp = set([c[i]])
        temp.update([c[i+3]])
        temp.update([c[i+6]])
        if (len(temp)==1 and c[i]!=0):
            return c[i]
    return 0

def judgebevel(board):
    c = []
    for i in board:
        c.extend(i)
    temp1 = set([c[0]])
    temp1.update(set([c[4]]))
    temp1.update(set([c[8]]))
    temp2 = set([c[2]])
    temp2.update(set([c[4]]))
    temp2.update(set([c[6]]))
    if (len(temp1)==1 and c[0]!=0 ):
        return c[0]
    elif (len(temp2)==1 and c[2]!=0):
        return c[2]
    else:
        return 0


a = isSolved([[2,1,2],[2,1,1],[1,2,1]])
print a
