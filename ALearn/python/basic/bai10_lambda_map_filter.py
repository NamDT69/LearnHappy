from functools import reduce


a = [3,4,6,3,34,5,2,3,4,5]

num = lambda s  : s + 100
print(num(2))


#filter(condition, list)__ 
b = list(filter(lambda x : (x % 2 == 0), a))#filter lay phan tu neu phan tu dung thi du lai list
#1 ham va danh sach doi so 
#vd a[0] if (a[0] % 2 == 0) thi tra ra
#in ra phan tu true
#map (function, list_name)
c = list(map(lambda x : (x % 2 == 0), a)) #map la lay phan tu roi nhan len bo vao list
d = list(map(lambda x : (x * 2), a)) #map la lay phan tu roi nhan len bo vao list
#in ra cac phan tu
print(b)
print(c)
print(d)

arr2d = [(3,4), (4,67), (6,2), (4,9)]

print(sorted(arr2d))
print(sorted(arr2d, key = lambda poun : poun[1]))
#reduce(function_condition, sequen)
print(reduce(lambda a,b: a + b if (a + b) < b else b, a,sequence=a))

def keywork(**dict1):
    for key ,works in dict1.items():
        print(key,works)
keywork(e ="ngu" ,h="oc cho")


n = int(input())
#nho phai co list
arr = list(map(int,input().split(" ")))

print(arr)


if __name__ == '__main__':
    list1 = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        list1.append([name, score])
    #key la tu khoa  
    minn = min(list1, key = lambda x : x[1])
    sorted(list1 , key= lambda h : h[1])
    for i in list1:
        if i[1] != minn[1]:
            minn = i
            break
    for i in list1:
        if i[1] == minn[1]:
            print(i[0])
    