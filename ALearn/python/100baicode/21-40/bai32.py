# Định nghĩa một hàm có thể in dictionary chứa key là các số từ 1 đến 3 (bao gồm cả 
# hai số) và các giá trị bình phương của chúng.
def inra(d):
    d[1] = 1 ** 2
    d[2] = 2 ** 2
    d[3] = 3 ** 2
d = {}
inra(d)
print(d)