from functools import reduce
import operator
s = [(1,2,6), (3,4,2),(5,6,5)]
a = 4
b = 5

def pro(x):
    x = x + 2
    y = x
    return y # print(reduce(lambda x, y:x + y if x > y else y,x))
# print(reduce(3,4))
h =lambda x, y : x * y
def ngu(y):
    if y > 10:
        return y
def ngu2(d):
    return d >10
ngu3 = lambda x : x > 10
s=map(pro, [5, 5])
l =[1,2,3,4,5,342,234,534]
o = filter(ngu2, l)
g = filter(ngu3, l)
# print(list(s))

# print(list(g))
# luc dau cho 2 so vao , ve sau cho 1 so vao roi tinh
print(reduce(lambda a, b : a if a > b else b, l))

arr2d = [(3,4), (4,67), (6,2), (4,9)]
## so  sanh 2 so a[0]
print(reduce(lambda a, b : a if a<b else b, arr2d))
#tinh tong baang operator
print(reduce(operator.add, l))
# tinh tichs cua list
print(reduce(operator.mul, l))

#hoat dong cuar reduce 3 tham so , tham so cuoi la dat lam mac dinh:

# Python program to  illustrate sum of two numbers.
def reduce(function, iterable, initializer=None):
    it = iter(iterable)
    if initializer is None:
        value = next(it)
    else:
        value = initializer
    for element in it:
        value = function(value, element)
    return value
 
# Note that the initializer, when not None, is used as the first value instead of the first value from iterable , and after the whole iterable.
tup = (2,1,0,2,2,0,0,2)
print(reduce(lambda x, y: x+y, tup,6))
 
# This code is contributed by aashutoshjha
#  tim cap phan tu tong lon nhat
def trave(x,y):
    a = x[0] + x[1]
    b = y[0] + y[1]
    if a > b:
        return x
    else:
        return y
a = reduce(trave, arr2d)
print(a)
