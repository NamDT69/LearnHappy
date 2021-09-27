# Đưa ra một RuntimeError exception
# Bài Python 55, Code by Quantrimang.com
class RuntimeErrorr(Exception):
    def __init__(self, mismatch):
        # Exception.__init__(self, mismatch)
        pass
try:
    print ("And now, the Vocational Guidance Counsellor Sketch.")
    raise RuntimeError("Does not have proper hat")
    print ("This print statement will not be reached.")
except Exception as problem:
    print ("Vocation problem: {0}".format(problem))

#  ko hieu cais quan que gi 