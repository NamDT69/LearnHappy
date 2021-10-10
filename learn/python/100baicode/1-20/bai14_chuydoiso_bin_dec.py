# Viết một chương trình chấp nhận đầu vào là chuỗi các số nhị phân 4 chữ số, phân 
# tách bởi dấu phẩy, kiểm tra xem chúng có chia hết cho 5 không. Sau đó in các số 
# chia hết cho 5 thành dãy phân tách bởi dấu phẩy.
# Ví dụ đầu vào là: 0100,0011,1010,1001
# Đầu ra sẽ là: 1010

h = list(str(i) for i in input().split(","))
l = []
for i in h:
    if int("0b" + i, 2) % 5 == 0:
        l.append(i)
print(",".join(l))


#cach 2:
value = []
items=[x for x in input("Nhập các số nhị phân: ").split(',')]
for p in items:
    intp = int(p, 2)
    if not intp%5:
        value.append(p)
# Bài tập Python 14, Code by Quantrimang.com
print (','.join(value))