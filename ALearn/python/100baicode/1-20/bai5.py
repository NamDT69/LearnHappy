# Định nghĩa một class có ít nhất 2 method:

# getString: để nhận một chuỗi do người dùng nhập vào từ giao diện điều khiển.

# printString: in chuỗi vừa nhập sang chữ hoa.

# Thêm vào các hàm hiểm tra đơn giản để kiểm tra method của class.
class inchu:
    def getString(self, s):
        self.s = s
    @property
    def printString(self):
        return self.s.upper()
tao = inchu()
tao.getString("ai la nguoi ay")
print(tao.printString)