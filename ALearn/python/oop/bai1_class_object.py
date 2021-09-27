class connguoi:
    pass
#tao doi tuong
humen = connguoi()
#tao thong tin
humen.ten = "nam"
humen.tuoi = 13
humen.gt = "nu"
print("ten:",humen.ten)
print("tuoi:",humen.tuoi)

###################################################################################


class car:
    #ten phuong thuc
    loaixe = "o to"
    #constructor
    def __init__(self, ten, mau, gia, dongco):
        pass
        self.ten = ten
        self.mau = mau
        self.gia = gia
        self.dongco = dongco
    def gioithieu(self):
        print("xe nay la xe dat nhaat ko co tien dung hong mua dc")
    
#tao doi tuong
lambo = car("lambogini", "vang", 50000, 4)
#xuat phuong thuc
print("loai xe {}".format(lambo.__class__.loaixe))
#xuat doi tuong
print("ten xe : {} . mau xe: {}. gia xe: {}. co {} dong co".format(lambo.ten, lambo.mau, lambo.gia, lambo.dongco))

print("ten xe nay la :" , lambo.ten)

## 2 cach goi ham nay
car.gioithieu(lambo)
lambo.gioithieu()