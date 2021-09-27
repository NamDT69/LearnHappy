#set ko co thu tu
#co the them ,xoa , cong, cac phan tu
#tao set bang ngoac nhon
#ko the chua list ben trong ,nhuw tuple
a = {1,2,3,4}

print("a =", a)

#tao set ko co phan tu
b = set()

#ko the dug a[0]
# them phan tu
a.add(5)#neu phan tu trung se bi loai, them nhieu phan tu dung update()

#co the nhan list tuple lam doi so vi du

a.update([1,2,3,4,5,6,7,19], (4,3,7,11,66,44))
print("a =", a)
b = set("3,4,5,8,2")

c = {3,2,5,2,5,7}
#xoa 
# Bạn dùng discard() và remove() để xóa phần tử cụ thể khỏi set.
#  Khi phần tử cần xóa không tồn tại trong set thì discard() không làm gì cả, còn remove() sẽ báo lỗi.
a.discard(1)
a.remove(7)
print("a =", a)
#xoa ngau nhien
a.pop()

#hop toan tu dung | hoac union
print(a|b)
print("a=",a.union(c))

#giao dung & hay intersection ,  tru dung - hay differen

print("a=",a & c)
print(a.difference(c))

#bu cua a va b nhung phan tu ko thuoc a va b, ^ hay symmetric_differrence
print("a=",a^c)