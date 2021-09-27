# Định nghĩa một hàm có input là 2 chuỗi và in chuỗi có độ dài lớn hơn trong giao diện 
# điều khiển. Nếu 2 chuỗi có chiều dài như nhau thì in tất cả các chuỗi theo dòng.
# Gợi ý:
# Sử dụng hàm len() để lấy chiều dài của một chuỗi
a = " qua hay roi"
b = " ngu qua tho"
def printa(a, b):
    if len(a) == len(b):
        return a + "\n" + b
    return a if len(a) > len(b) else b
print(printa(a, b))
