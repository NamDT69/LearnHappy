# Định nghĩa một class có tên là Vietnam, với static method là printNationality.

from typing import Type

class ngu:
    pass
class Vietnam(ngu, object):
    x = 0
    @classmethod
    def printf(cls):
        cls.x += 1
        return cls.x
    def printNationality(cls):
        print("Viet Nam")
v = Vietnam()
c = Vietnam()
print(v.printf())
print(v.printf())
print(c.printf())
print(Vietnam.x)
# v.printNationality()
# base bao gom tat ca cac doi tuong trong class
# dict bao gom tat ca cac phuong thuc trong class
print(str((Vietnam.__bases__[1].__name__)))
print(Vietnam.__bases__)

print(Vietnam.__dict__)


