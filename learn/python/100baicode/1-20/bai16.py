# Viết một chương trình chấp nhận đầu vào là một câu, đếm số chữ cái và chữ số 
# trong câu đó. Giả sử đầu vào sau được cấp cho chương trình: hello world! 123
# Thì đầu ra sẽ là:
# Số chữ cái là: 10
# Số chữ số là: 3
s = input()
h = 0
t = 0
for i in s:
    if i.isnumeric():
        h += 1
    elif i.isalnum():
        t += 1
print (h ," ", t)
