import array as arr
# n = int(input())
# arr = []
# for i in range(n):
#     arr.append(int(input()))
print("\n")
# for i in range(n):
#     print(arr[i])


a = ['a', 'b', 'c']
n = [1, 2, 3]
x = [a, n]

print (x) # Output: [['a', 'b', 'c'], [1, 2, 3]]
print (x[0]) # Output: ['a', 'b', 'c']
print(x[0][1]) # Output: b

#list qua ngon, sua doi cac kieu, chen ,thay doi , rat de su dung

for j in range(5):
    print(j, end=",")
print("\n")
b = arr.array('d',[4,4,6,2,5,3])
print(b)

list1 = [1,3,4,6,3,5,3]
c = arr.array('h',list1)
print(c)
#mang dung de lien ket code c, ko nenn dung chung

#listcomperhension ko nen dung vs list khac kieu du lieu,  ko nen dung khi nhieu hown 1 dieu kien
list3 = [x for x in range(100) if x % 2 == 0]
print(list3)