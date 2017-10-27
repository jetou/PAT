base64 = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
          'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
          '0','1','2','3','4','5','6','7','8','9','+','/']

def to_base_64(string):
    Dec = []
    binary = []
    for i in string:
        Dec.append(ord(i))
    for i in Dec:
        binary = change_to_binary(i, binary)
    change = change_to_dec(binary)
    result = [base64[i] for i in change]

    return "".join(result)

def from_base_64(string):
    binary = []
    position = [base64.index(i) for i in string]
    for i in position:
        binary = (change_to_binary(i, binary, 6))
    change = change_to_dec(binary, False)
    result = [chr(i) for i in change]

    return "".join(result)


def change_to_binary(num, bin, n=8):
    result = []
    while num >= 2:  #chang to binary
        result.append(num % 2)
        num /= 2
    result.append(num)
    for i in range(len(result), n):  #add pre 0
        result.append(0)
    result.reverse()
    bin.extend(result)
    return bin

def change_to_dec(list, transfor=True):
    if transfor:
        a = len(list) / 6
        if len(list) % 6 != 0: # for not enough 6  add 0
            for i in range(len(list), (a+1)*6):
                list.append(0)
        change = ([list[i:i + 6] for i in range(0, len(list), 6)])
    else:
        change = ([list[i:i + 8] for i in range(0, len(list), 8)])
        change = [i for i in change if len(i) == 8]

    #transfor dec
    result = []
    for i in change:
        num = 0;s = len(i) - 1
        for j in i:
            num += j * pow(2, s)
            s-=1
        result.append(num)
    return result





a = from_base_64('dGhpcyBpcyBhIHN0cmluZyEh')
print a