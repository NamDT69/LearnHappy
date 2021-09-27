#key dictionary
#thuong su dung vao du lieu ko dong nhat
#ko the thay doi dc
#ko cho phep ghi (write-protected)

my_tuple = () # khai bao tuple giong nhu list , lap nhanh hon list

mi_tuple =  1, "hay", " ngu" #tao tuple ko can ngoac , day goi la dong goi tuple
a,b,c = mi_tuple # mo tuple
print(a)

#tao 1 phan tu can dau , va ngoac

mo_tuple = ("hocngulamgi",)

#thay phan tu neu phan tu do thuoc list long ben trong tuple
my_tuple = ("ngu vay sao can", [3, 2, 5])
my_tuple[1][0] = 9
print(my_tuple)

#co the lap tuple vs * , + 2 tuple vs nhau 
print(my_tuple*2)
#chi co the xoa toan bo tuple , ko xoa dduoc 1 phaan tu
del my_tuple
my_tuple = ()
print(all(mi_tuple)) # tra ve true neu tat ca phan tu la true ke ca rong
print(any(my_tuple)) # tra ve fasle neu tuple rong, true neu 1 phan tu true
print(enumerate(mi_tuple))

mu_tuple = (1, 3,6,2,5,2,1,5,2)
#tuple() chuuyen cac string, list ,set .. thanh tuple
#lay phan tu  tuple thah list r sap xep
print(sorted(mu_tuple))
