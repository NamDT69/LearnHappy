import sys
from typing import final
a = ["a", 0, 4,3,2, "s"]

for i in a:
    try:
        print("phan tu :", i)

        r = 1/int(i)
        break
    except: #ngoai le sai se chay vao day;
        #goi ngoai le ra
        print("bi loi" , sys.exc_info()[0])
        print("so tiep theo")

# try:
#  # khối code lệnh try
# except exceptionName: #excepname la ten cac loi co the xay raa
#  # khối code lệnh except

try:
    print("ngu")
    f = open("test.txt",encoding = 'utf-8')
finally:#dung de giai phong khi xay ra loi, ko co loi
    f.close()


#Write your code here

class Calculator:
    def power(self, n, p):
        if n < 0 or p < 0:
            # tao ngoai le raise;
            raise Exception("n and p should be non-negative")
        return n ** p
    
myCalculator=Calculator()
T=int(input())
for i in range(T):
    n,p = map(int, input().split())
    try:
        ans=myCalculator.power(n,p)
        print(ans)
    except Exception as e:
        print(e)   