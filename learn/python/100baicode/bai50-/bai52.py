# Định nghĩa một class có tên là Circle có thể được xây dựng từ bán kính. Circle có 
# một method có thể tính diện tích
from typing import Match


class Circle:
    def __init__(self, radius):
        self.r = radius

    @property
    def chuvi_thetich(self):
        print("chu vi %.2f , the tich : %.2f" %(3.14 * self.r, (4/3) * 3.14 * (self.r **3)))
    @property
    def area(self):
        print (3.14 * self.r * self.r)
h1 = Circle(2)
h1.chuvi_thetich
h1.area