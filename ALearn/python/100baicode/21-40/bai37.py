# Định nghĩa một hàm có thể tạo list chứa các giá trị bình phương của các số từ 1 đến 
# 20 (bao gồm cả 1 và 20) và in 5 mục đầu tiên trong list.
def printf():
    d = []
    for i in range(1, 21):
        d.append(i ** 2)
    print(d[:5])
printf()