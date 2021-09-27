def tong():
    """day la ham tinh tong nha """
    s = 0
    for i in range(6):
        s += i
    return s
print(tong())
print("docstring",tong.__doc__)
#-------------------------------------------------------------------------------------


def hamcodoiso(t, k ="sao may ngu vay"):
    """ham co doi so mac dinh yeu cau doi so mac dinh nam sau doi so thuong"""
    print(t,k)

hamcodoiso("dung")
hamcodoiso("tuan", "may thong minh qua")
#-------------------------------------------------------------------------------------

#neu ko biet bao nhieu doi so truyen vao co the dung dau hoa thi *
#tham so se goi thanh 1 tuple
def sole(*num):
    """ham tinh so le"""
    a = list(i for i in num if i % 2 == 0)
    print(a)
    print(num)
sole(3,4,6,2,7,2,5,0,54)