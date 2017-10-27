import re
def solution(string, markers):
    restring = recreate(string, markers)
    result = ""
    if len(restring) > 1:
        restring[0] = removespeac(restring[0])
    result += restring[0]
    for i in range(1, len(restring)):
        if '\n' in restring[i]:
            restrin = restring[i][restring[i].index('\n'):]
            result += restrin
            result = removespeac(result)
    if len(restring) > 1:
        return removespeac(result)
    return result

def recreate(string, markers):
    s = ''
    for i in markers:
        if i in '$?*.^' or i == '\\\\':
            s += '\\'
        s += i
        s += '|'
    string = re.split(s,string)
    return string

def removespeac(string):
    string = string.replace('\n','\\n')
    string = string.rstrip()
    string = string.replace('\\n', '\n')
    return string


a = solution('apples, pears \xc2\xa7 and bananas\ngrapes\navocado', ["\xc2\xa7"])
print a



# best Solution
# def bestsolution(string, markers):
#     parts = string.split('\n')
#     for s in markers:
#         parts = [v.split(s)[0].rstrip() for v in parts]
#     return '\n'.join(parts)


