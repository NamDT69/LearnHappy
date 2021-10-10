class xe:
    loaixe = "dong co"
    def __init__(self, sobanh, dongco, gia):
        self.sobanh = sobanh
        self.dongco = dongco
        self.gia = gia
    @classmethod
    def gioithieu(cls):
        print("xe la 1 phuong tien di chuyen")

class oto(xe): #ke thua xe
    def __init__(self, sobanh, dongco, gia, mau, socho):
        super().__init__(sobanh, dongco, gia)
        self.mau = mau
        self.socho = socho

mec = oto(4, 4, 100000, "vang", 6)

print(mec.__dict__)#special method
print(mec.loaixe)
mec.gioithieu()
