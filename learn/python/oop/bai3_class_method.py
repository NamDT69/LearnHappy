class sucmanh:
    suc_manh = 1
    def __init__(self, diem, mana) :
        self.diem = diem 
        self.mana = mana
    @classmethod
    #dung de cap nhat lai suc manh ,dung cai nay doi khi co 1 vai dieu kien de cap nhap thif ms cho cap nhat
    #cap nhat cho toan bo class
    def cap_nhat_suc_manh(cls):
        cls.suc_manh += 1
sieu_nhan = sucmanh(2000,4000)
print(sucmanh.suc_manh)
sieu_nhan.cap_nhat_suc_manh()
print(sieu_nhan.suc_manh)

class oto:
    def __init__(self, hangg, mau, gia):
        self.hang = hangg
        self.mau = mau
        self.gia = gia
    @classmethod
    def set_str(cls, s):
        a = s.split("-")
        b = list(i.strip() for i in a)
        hangg, mau, gia = b
        return cls(hangg, mau, gia)
ss = "toyota - vang - 100000"
hang1 = oto.set_str(ss)
print(hang1.__dict__)