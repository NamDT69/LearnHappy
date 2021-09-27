# Định nghĩa một class có tên là Shape và class con là Square. Square có hàm init để 
# lấy đối số là chiều dài. Cả 2 class đều có hàm area để in diện tích của hình, diện tích 
# mặc định của Shape là 0.
class Shape:
    def __init__(self):
        pass
    def area(self):
        print(0)
class Square(Shape):
    def __init__(self, dai):
        Shape.__init__(self)
        self.dodai= dai
    def area(self):
        
        print(self.dodai * self.dodai)
a = Square(1)
a.area()
