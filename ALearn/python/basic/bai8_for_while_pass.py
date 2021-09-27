for i in range(0, 100, 2):
    print(i , end=",")
else : # khi lap xong
    print("\ndax lap xong")


print("\n")
#break se bo qua
for i in range(2,100):
    for j in range(2, i):
        if i % j == 0 :
            print (i,"day ko phai la so nguyen to ")
            break # dung vong lap for j
    else : #khi dung break se bo qua else
        print(i,"la so nguyen to @@")


print("\n")
n = 0
while n < 4:
    print(n)
    n += 1
else:
    print("dieu kien sai thoat khoi vong for")



flag = 1
while (flag): 
    num = int(input("nhap so nguyen am :"))
    if num < 0:
        break
    print("nhap lai di thang ngao da nay")
print("dung roi day la so nguyen am")
print("\n")


#lenh pass dung de bo qua ham, hay bo qua vong lap thay lenh rong 
#su dung khi ko biet viet gi ben trong
def hayqua(n): pass
    

def hayqua2(h):
    for i in range(10):
        pass#bo qua vong for nay bang rong
    print(" bo qua") # ko bo qua cho nay

hayqua(1)
hayqua2(2)

print("\n")
i = 0
while True:
    n = input("\n\n nhap enter")
    print(i)
    i += 1

pass

