a = {
    "hay" : " ngu"
}
# python không có khái niệm địa chỉ
# id là identifier của object
# python map tên với object bằng mapping
b = a
c = 9
a["hay"] = "ngu 1"
# trong trường hợp này tên b và a cùng được map đến 1 dictionary, đó là vì sao call id(a) và id(b) cùng cho ra 1 kết quả
# python chia ra làm name (tên) và object (data)

# thêm a thì bên b thay đổi luôn 
print(hex(id(b)))
print(hex(id(a)))
print(hex(id(c)))