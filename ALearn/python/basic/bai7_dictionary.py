#la tap hop cac key ko co thu tu, su dung trong du lieu lon
#phai nho cac chi so
dict1 = {} # khai bao rong

dict2 = {1 :" ngu", 2 : "hay"}
print(dict2[1])

dict3 = {'tên': 'QTM', 1: [1, 3, 5]} # khoa hon hop
print(dict3['tên'])

dict4 = dict({1:"hoc", 2: "nha"}) #tao bang dict

dict5 = dict([(1,'QTM'), (2,'CN')])# tao theo cap
print(dict5.get(1))

#them 
dict1[1]= 9
print(dict1[1])
#sua
dict2[1] = "hay qua"

# xoa phan tu
del dict4[1]
print(dict4.pop(2))
print(dict4)
 #xoa ngau nhien
print(dict5.popitem())
print(dict5)

print(dict2.values())

print(dict2.keys())

print(dict2.items())

print(dict2.setdefault(4, "ngu"))

a = dict2.copy()

# chuyen doi 2 list thanh dict
b = dict([[3,2],[4,7]])
print(b)

