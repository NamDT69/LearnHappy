#Viết chương trình chấp nhận một chuỗi số, phân tách bằng dấu phẩy từ giao diện điều khiển, tạo ra một danh sách và một tuple chứa mọi số.
# Ví dụ: Đầu vào được cung cấp là 34,67,55,33,12,98 thì đầu ra là:

# ['34', '67', '55', '33', '12', '98']
# ('34', '67', '55', '33', '12', '98')

n = input()

b = tuple(n.split(","))
c = list(b)
print(b)
print(c)