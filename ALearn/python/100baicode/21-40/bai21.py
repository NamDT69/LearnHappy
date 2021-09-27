# Một website yêu cầu người dùng nhập tên người dùng và mật khẩu để đăng ký. Viết 
# chương trình để kiểm tra tính hợp lệ của mật khẩu mà người dùng nhập vào.
# Các tiêu chí kiểm tra mật khẩu bao gồm:
# 1. Ít nhất 1 chữ cái nằm trong [a-z]
# 2. Ít nhất 1 số nằm trong [0-9]
# 3. Ít nhất 1 kí tự nằm trong [A-Z]
# 4. Ít nhất 1 ký tự nằm trong [$ # @]
# 5. Độ dài mật khẩu tối thiểu: 6
# 6. Độ dài mật khẩu tối đa: 12

# n = input()
# d = {"chuthuong"  : False, "chuso" : False, "chuHoa" : False, "kitu" : False}
# if len(n) >= 6 and len(n) <= 12 :
# # print(n.isdigit())
#     for i in n:
#         if i.isdigit() :
#             d["chuso"] = True
#         if i.isupper():
#             d["chuHoa"] = True
#         if i.isascii():
#             d["chuthuong"] = True
#         if i.isalpha() == True:
#             d["kitu"] = True
#     if d["chuthuong"] and d["chuso"] and d["chuHoa"] and d["kitu"] is True:
#         print("mat khau ok")
#     else:
#         print("mat khau phai co 1 Ky tu viet hoa, chu so, ki tu dac biet")


# else:
#     print("mat khau yeu cau 6 ki tu va duoi 12 ki tu")
import re
n = list(x for x in input().split(","))
l = []
for p in n:
    if len(p) < 6 or len(p) > 12:
        continue
    else: 
        pass
    if  not re.search("[a-z]", p):
        continue
    elif not re.search("[0-9]", p):
        continue
    elif not re.search("[A-Z]", p) :
        continue
    elif not re.search("[$ # @]", p):
        continue
    elif re.search("\s", p):
        continue
    else:
        pass
    l.append(p)
    
print(l)