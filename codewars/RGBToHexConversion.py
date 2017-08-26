def rgb(r, g, b):
    op  = []
    op = ["00", "00", "00"]
    r = depand(r)
    g = depand(g)
    b = depand(b)
    r = hex(r)
    op[0] = op[0] + r[2:]
    g = hex(g)
    op[1] = op[1] + g[2:]
    b = hex(b)
    op[2] = op[2] + b[2:]
    output = op[0][-2:] + op[1][-2:] + op[2][-2:]
    return output.upper()

def depand(x):
    min(255, max(x, 0))
    return x

a = rgb(148, 0, 211)
print a
