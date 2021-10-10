# Một Robot di chuyển trong mặt phẳng bắt đầu từ điểm đầu tiên (0,0). Robot có thể di 
# chuyển theo hướng UP, DOWN, LEFT và RIGHT với những bước nhất định. Dấu di 
# chuyển của robot được đánh hiển thị như sau:
# UP 5
# DOWN 3
# LEFT 3
# RIGHT 3
# Các con số sau phía sau hướng di chuyển chính là số bước đi. Hãy viết chương 
# trình để tính toán khoảng cách từ vị trí hiện tại đến vị trí đầu tiên, sau khi robot đã di
# chuyển một quãng đường. Nếu khoảng cách là một số thập phân chỉ cần in só 
# nguyên gần nhất.
# Ví dụ: Nếu tuple sau đây là input của chương trình:
# UP 5
# DOWN 3
# LEFT 3
# RIGHT 2
# thì đầu ra sẽ là 2
import math
a = [0,0]
UP = int(input())
DOWN = int(input())
LEFT = int(input())
RIGHT = int(input())
a[0] =a[0] -LEFT + RIGHT
a[1] = a[1] + UP - DOWN
h = (a[0]**2 +  a[1] ** 2)**(1/2)
print(round(h))


import math
pos = [0,0]
while True:
    s = input()
    if not s:
        break
    movement = s.split(" ")
    direction = movement[0]
    steps = int(movement[1])
    if direction=="UP":
        pos[0]+=steps
    elif direction=="DOWN":
        pos[0]-=steps
    elif direction=="LEFT":
        pos[1]-=steps
    elif direction=="RIGHT":
        pos[1]+=steps
    else:
        pass
# Bài tập Python 24 Code by Quantrimang.com
print (int(round(math.sqrt(pos[1]**2+pos[0]**2))))