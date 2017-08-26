def valid_parentheses(string):
    String = string
    end = 0
    Slen = len(String)
    if (Slen == 0):
        return True
    for i in range(0, Slen):
        if String[i] == '(':
            end += 1
        elif String[i] == ')':
            if (end == 0):
                return False
            end -= 1
    return end==0

a = valid_parentheses( "hi())(" )
print a