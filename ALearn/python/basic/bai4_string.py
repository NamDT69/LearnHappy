s = "superman"
a = "VIPQUA"
v = "ngu la chet ak haha"
arr = ["ngu", "hoc"]
#bien thanh chu thuong
print(a.lower())

#chu hoa
print(s.upper())

#kiem tra xem co so hay ko
print(s.isalnum())

#kiemtra xem co toan chu hay ko
print(s.isalpha())

#kiem tra xem co toann so hay ko
print(s.isnumeric())

#cat chuoi ra list tu 1 phan tu
print(v.split(" "))

#noi chuoi tu list
print(" ".join(v.split()))
print(" ".join(arr))
print(" ".join(a))

#thay the chu nay sang chu khac
s.replace("e" , "3")# chi tam thoi
print(s)
print(s.replace("e" , "3"))

#cat chuoi
print(s[0:2])
print(s[-2:])
print(s[:-2])
#trong mang co index am

print(s.isascii())
print(s.isdecimal())
print(s.isdigit())

print(len(s))

print("py""thon")

print(enumerate(s)) 


thu_tu_mac_dinh = "{}, {} và {}".format('Quản','Trị','Mạng')
print('\n--- Thứ tự mặc định ---')
print(thu_tu_mac_dinh)
 
 # sử dụng đối số vị trí để sắp xếp thứ tự
vi_tri_thu_tu= "{1}, {0} và {2}".format('Quản','Trị','Mạng')
print('\n--- Thứ tự theo vị trí ---')
print(vi_tri_thu_tu)

print("{0} chuyen sang nhi phan la {0:b}".format(65))
#can chinh chuoi
print( "|{:<10}|{:^10}|{:>10}|".format('Quản','Trị','Mạng'))
