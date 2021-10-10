# Viết chương trình Python dùng map() và filter() để tạo list chứa giá trị bình phương 
# của các số chẵn trong [1,2,3,4,5,6,7,8,9,10].

l = [1,2,3,4,5,6,7,8,9,10]
m = list(map(lambda x :  x ** 2, list(filter(lambda x : (x % 2 == 0), l))))
print(m)