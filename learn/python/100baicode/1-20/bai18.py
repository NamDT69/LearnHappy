# Viết một chương trình tính giá trị của a+aa+aaa+aaaa với a là số được nhập vào bởi 
# người dùng.
# Giả sử a được nhập vào là 1 thì đầu ra sẽ là: 1234

n2 = int(input())
for i in range(1,4):
    n2 = n2 * 10 + i + 1
print(n2)


n = int(input())
a1 = int("%s"% n)
a2 = int("%s%s"% (n,n))
a3 = int("%s%s%s"% (n,n,n))
a4 = int("%s%s%s%s"% (n,n,n,n))

print(a1 + a2 + a3 + a4)