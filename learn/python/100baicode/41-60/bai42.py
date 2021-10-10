# Viết một chương trình để tạo tuple khác, chứa các giá trị là số chẵn trong 
# tuple (1,2,3,4,5,6,7,8,9,10) cho trước.
t1 = (1,2,3,4,5,6,7,8,9,10)
t2 = (i for i in t1 if i % 2 == 0 )
print (tuple(t2))