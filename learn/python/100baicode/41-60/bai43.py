# Viết một chương trình để tạo ra và in tuple chứa các số chẵn được lấy từ tuple 
# (1,2,3,4,5,6,7,8,9,10)
t1  = (1,2,3,4,5,6,7,8,9,10)
t2 = tuple(i for i in t1 if i % 2 == 0)
for i  in range (len(t2)):
    print(t2[i])