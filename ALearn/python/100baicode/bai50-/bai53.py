# Định nghĩa class có tên là Hinhchunhat được xây dựng bằng chiều dài và chiều rộng. 
# Class Hinhchunhat có method để tính diện tích

class Hinhchunhat:
    def __init__ (self, dai, rong):
        self.dai = dai
        self.rong = rong
    def area(self):
        print("area:",self.dai * self.rong)
a = Hinhchunhat(3, 4)
a.area()