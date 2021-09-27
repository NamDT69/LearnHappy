# Định nghĩa một class tên Vietnam và class con của nó là Hanoi.
class Vietnam:
    
    def inn(self, s):
        print(s)
class Hanoi(Vietnam):
    pass
t = Vietnam()
t.inn("Viet Nam")
h = Hanoi()
h.inn("Ha noi")