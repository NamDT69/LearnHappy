class person:
    def __init__(self, ho, ten):
        self.ho = ho
        self.ten = ten
        self.email = ho + ten + "@cvai.hmss"
        #getter cai vao
    @property
    def ho_ten(self):
        return "ho va ten :{}".format(self.ho + self.ten)
        #day bien thhanh 1 thuoc tinh
    @property
        #day  la phuong thuc
    def emails(self):
        return "{}".format(self.ho + self.ten +   "@cvai.hmss")   
        #setter
    @ho_ten.setter
    def ho_ten(self, hoten):
        hoo , tenn = hoten.split(" ")
        self.ho = hoo
        self.ten = tenn
    @ho_ten.deleter
    def ho_ten(self):
        self.ho = None
        self.ten = None
        print("da xoa")
thang = person("tran", "nam")
thang.ho = "nguyen"
thang.ten = "duy"
print(thang.ho)
print(thang.ten)
print(thang.emails)

thang.ho_ten = "tuan anh"

print(thang.ho_ten)
print(thang.ho)
print(thang.ten)
print(thang.emails)

del thang.ho_ten