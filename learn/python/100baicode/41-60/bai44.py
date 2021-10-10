# Viết một chương trình Python nhận chuỗi nhập vào bởi người dùng, in "Yes" nếu 
# chuỗi là "yes" hoặc "YES" hoặc "Yes", nếu không in "No".
n = input()
if n == "Yes" or n == "YES" or n == "yes":
    print("Yes")
else:
    print ("No")