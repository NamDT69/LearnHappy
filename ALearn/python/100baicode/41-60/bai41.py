# Với tuple (1,2,3,4,5,6,7,8,9,10) cho trước, viết một chương trình in một nửa số giá trị 
# đầu tiên trong 1 dòng và 1 nửa số giá trị cuối trong 1 dòng
t = (1,2,3,4,5,6,7,8,9,10)
n = int(len(t) / 2)
print(t[:n])
print(t[n: ])