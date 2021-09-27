# Viết một chương trình có thể tính giai thừa của một số cho trước. 
# Kết quả được in thành chuỗi trên một dòng, phân tách bởi dấu phẩy. Ví dụ, số cho trước là 8 thì kết quả đầu ra phải là 40320.

n = int(input("nhap 1 so :"))
def fatorial(n):
    if n == 1:
        return 1
    return n * fatorial(n - 1)
a = list(str(fatorial(n)))

print(",".join(a))

 