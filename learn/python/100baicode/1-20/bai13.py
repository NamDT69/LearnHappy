# Viết một chương trình chấp nhận đầu vào là một chuỗi các từ tách biệt bởi khoảng 
# trắng, loại bỏ các từ trùng lặp, sắp xếp theo thứ tự bảng chữ cái, rồi in chúng.Giả sử đầu vào là:
#  hello world and practice makes perfect and hello world againThì đầu ra là: again and hello makes perfect practice world

n = list(input().split(" "))

print(n)
h = []
for i in n:
    if i not in h:
        h.append(i)
h.sort()
print(" ".join(h))
## cach 2 
s = input("Nhập chuỗi của bạn: ")
words = [word for word in s.split(" ")]
print (" ".join(sorted(list(set(words)))))