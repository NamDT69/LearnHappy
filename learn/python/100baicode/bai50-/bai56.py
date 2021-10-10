# Viết hàm để tính 5/0 và sử dụng try/exception để bắt lỗi
def erro():
    x = 9
    try :
       
        x += int("s")
        # raise ZeroDivisionError("LOI ko chia dc cho 0")
    except ZeroDivisionError as zero:
        print("loi ko chia dc cho 0")

        print("error: " + str(zero))
    except Exception as ex:
        print ("error2:" , str(ex))
    # finally:
    #     print("huy phep tinh")
    else:
        print(x)

erro()
