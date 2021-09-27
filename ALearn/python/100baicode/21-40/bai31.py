# Định nghĩa hàm có thể chấp nhận input là số nguyên và in "Đây là một số chẵn" nếu 
# nó chẵn và in "Đây là một số lẻ" nếu là số lẻ
def chanle(n):
    return "day la so chan" if n % 2 == 0 else "day la so le"
print(chanle(43))