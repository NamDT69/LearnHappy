# Viết chương trình tính số tiền thực của một tài khoản ngân hàng dựa trên nhật ký 
# giao dịch được nhập vào từ giao diện điều khiển.
# Định dạng nhật ký được hiển thị như sau:
# D 100
# W 200
# (D là tiền gửi, W là tiền rút ra).
# Giả sử đầu vào được cung cấp là:
# D 300
# D 300
# W 200
# D 100
# Thì đầu ra sẽ là:b
# 500
d = {"D" : 0, "W" : 0}
while True:
    h = input()
    if not h:
        break
    t, n = h.split(" ")
    if t == "D":
        d["D"] += int(n)
    else:
        d["W"] += int(n)
print(d["D"] - d["W"])