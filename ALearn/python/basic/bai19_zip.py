l = [1,2,3,4]
m =[5,6,7,8]

print(list(zip(l,m)))
#zip la chon tung cap di vs nhau
for h ,(i , j) in enumerate(zip(l, m)):
    print(f"{h} :____{i} :-> {j}")