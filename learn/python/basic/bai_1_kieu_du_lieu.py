
from decimal import * # dau '*' lay toan bo noi dung
#from decimal import Decimal
import fractions
from fractions import *
import math

tuoi = 17
d = Fraction(7,8)#from lays toan bo noi dung ra
c = fractions.Fraction(3,4)#phan so
a = complex(9,3)#so phuc
b = 3 + 9j

print("hello world")
print(type(tuoi))#in ra kieu du lieu
print(a)
print(type(b))
print(b)
print(c)
print(str(tuoi))#ep kieu ve xau
print(str(10/3))#do chinh xac 15 chu so thap phan
print( str(Decimal(10) / Decimal(3)) )#do chinh xac 30 so thap phan
print(a.real)



if True: print('Xin chào!'); q = 10; print (q)
sum = 10 + 9 + 8 +\
100 +30+ 300
print(sum) 
# input("\n\nNhấn phím Enter để thoát!")

print("h" in "hello")
print("h" not in "hello")
# identity toan tu dinh danh
print( 10 is 10)
print( 10 is not 10)

b = 8 + 2j
print(b + 2)
#kiem tra b co phai la so phuc hay ko
print(isinstance(b, complex)) 

print(Fraction(Decimal(0.4)))
print(Fraction("0.4"))# dung string in ra chinh xac hon

x = 8.245345
print('Giá trị của x là %3.2f' %x)

#decimal lam cho so chinh xac hon vi cac so thap phan lua trong may tinh ko du nen lam tron ve 0.1
#math rat hay

dd = ["con  ", "  cho ", "cua  tao"]

#trip dung de xoa khoang ttranng
aa = list(str.strip() for str in dd)
print(aa)
print(aa.__sizeof__)


aaa= 9
print(f"name {aaa}")

def print_formatted(number):
    h = len("{0:b}".format(number))
  
    for i in range(1, number + 1):
       print("{0:{width}d} {0:{width}o} {0:{width}x} {0:{width}b}".format(i,width = h))
       