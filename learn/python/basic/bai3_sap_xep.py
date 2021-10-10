n = int(input())

arr = []
for i in range(n):
    arr.append(int(input()))
for i in range(n - 1):
    for j in range(i , n):
        if arr[i] > arr[j]:
            t = arr[i]
            arr[i] = arr[j]
            arr[j] = t
lisst = [4, 5, 8, 9 , 12, 53]
#search
print(arr.index(1))

#sort
arr.sort()
print(arr)

#so phan tu trong arr
print(len(arr))

#xoa 
lisst.pop(2)
print(lisst)
#del lisst[2]

#insert chen
lisst.insert(0, 100)
print(lisst)

#count
print(lisst.count(12))

#dao nguoc mang ,reverse
lisst.reverse()
print(lisst)

#xoa phan tu
lisst.remove(53)
print(lisst)

#max min
print(max(lisst))

#them tat car phan tu cua list vao list khac
lisst.extend(arr)
print(lisst)

#tra ve tong gia tri cua lisst
print(sum(arr))

cub3 = [3 ** x for x in range(9)]
so_le = [x for x in range (18) if x % 2 == 1]
noi_list = [x+y for x in ['Ngôn ngữ ','Lập trình '] for y in ['Python','C++']]

if __name__ == '__main__':
    n = int(input())
    arr = input().split()
    arr.sort(reverse= True)
    print(arr)
	