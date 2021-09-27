# Viết một chương trình tìm tất cả các số trong đoạn 1000 và 3000 (tính cả 2 số này) 
# sao cho tất cả các chữ số trong số đó là số chẵn. In các số tìm được thành chuỗi 
# cách nhau bởi dấu phẩy, trên một dòng
l = []
for h in range(1000, 3001):
    i = str(h)
    if int(i[0])  % 2 == 0 and int(i[1])  % 2 == 0 and int(i[2])  % 2 == 0  and int(i[3])  % 2 == 0 :
        l.append(i)
print(",".join(l))

