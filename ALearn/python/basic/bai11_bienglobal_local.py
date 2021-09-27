def ham1():
    x = 20

    def ham2():
       global x
       x = 25
       print("Trước khi gọi ham2: ", x)
 
    print("Trước khi gọi ham2: ", x)
    print("Đang gọi ham2")
    ham2()
    print("Sau khi gọi ham2: ", x)

ham1()
print("x trong main: ", x)
#=================================================================================================================================================================================================
def ham_ngoai():
    
    x = "Biến cục bộ"
 
    def ham_trong():
       nonlocal x
       x = "Biến nonlocal"
       print("Bên trong:", x)
 
    ham_trong()
    print("Bên ngoài:", x)

ham_ngoai()
print("x trong main: ", x)

#=================================================================================================================================================================================================
def ham_ngoai():
    
    x = "Biến cục bộ"
 
    def ham_trong():
       
       x = "Biến local"
       print("Bên trong:", x)
 
    ham_trong()
    print("Bên ngoài:", x)

ham_ngoai()
print("x trong main: ", x)