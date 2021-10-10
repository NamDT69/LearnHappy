# Viết chương trình Python dùng filter() để tạo danh sách chứa các số chẵn trong đoạn 
# [1,20].
print(list(filter(lambda x : (x % 2 == 0), range(1,21))))