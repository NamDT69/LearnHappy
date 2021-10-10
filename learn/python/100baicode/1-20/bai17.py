# Viết một chương trình chấp nhận đầu vào là một câu, đếm chữ hoa, chữ thường.
# Giả sử đầu vào là: Quản Trị Mạng
# Thì đầu ra là:
# Chữ hoa: 3
# Chữ thường: 8
s = input()
d = {"lower": 0 , "upper" : 0}
for i in s:
    if i.islower():
        d["lower"] += 1
    elif i.isupper():
        d["upper"] += 1
print("chu thuong :", d["lower"])
print("chu hoa :", d["upper"])