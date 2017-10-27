def snail(array):
    result = []
    already = []
    curh = 0
    curw = 0
    hight = len(array)
    wight = len(array[0])
    indexX = [1,1]
    indexY = [0, 0]
    for i in range(hight*wight):
        result.append(array[curh][curw])
        already.append([curh,curw])
        if curw + indexX[0] == wight:
            indexX[0] = 0
            indexY = [1, 1]
        elif curw + indexX[0] == -1:
            indexX[0] = 0
            indexY = [-1, -1]
        elif [curh, curw + indexX[0]] in already and indexX[0] != 0:
            indexX[0] = 0
            indexY[0] = -indexY[1]
            indexY[1] = -indexY[1]

        if curh + indexY[0] == hight:
            indexY[0] = 0
            indexX = [-1, -1]
        elif curh + indexY[0] == -1:
            indexY[0] = 0
            indexX = [1, 1]
        elif [curh + indexY[0], curw] in already and indexY[0] != 0:
            indexY[0] = 0
            indexX[0] = -indexX[1]
            indexX[1] = -indexX[1]

        curh += indexY[0]

        curw += indexX[0]



    return result


array = [[1, 2, 3, 1], [4, 5, 6, 4], [7, 8, 9, 7], [7, 8, 9, 7]]
a = snail(array)
print a


# best solution
# def snail(array):
#     a = []
#     while array:
#         a.extend(list(array.pop(0)))
#         array = zip(*array)
#         array.reverse()
#     return a