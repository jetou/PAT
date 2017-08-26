def convert(input, source, target):
    decresult = converterdec(input, source, len(source))# all transfore 10
    targetresult = convertarget(decresult, target, len(target))
    return targetresult[::-1]

def converterdec(input, source, sourcenumber):
    resoult = 0
    weight = len(input) - 1
    for i in input:
        resoult += source.index(i) * sourcenumber**weight
        weight-=1
    return resoult

def convertarget(input, target, targetnumber):
    strresult = ''
    while (input / targetnumber > 0):
        result =  input % targetnumber
        strresult += target[result]
        input /= targetnumber
    strresult += target[input]
    return strresult

a = convert("15", '0123456789', '01')
print a