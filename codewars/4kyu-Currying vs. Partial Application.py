class CP:
    def __init__(self, f):
        self.args = []
        self.f = f
        self.cp = f.func_code.co_argcount  # get number of function parameter
    def __call__(self, *args):
        self.args += args
        if len(self.args) >= self.cp:
            return self.f(*self.args[:self.cp])
        else:
            return self
def curryPartial(f, *initial_args):
    f = CP(f)
    return f(*initial_args)

def add(a, b, c):
  return a + b + c


print curryPartial(add, 1)(2,3)

