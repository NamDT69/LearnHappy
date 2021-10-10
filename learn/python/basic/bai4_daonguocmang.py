import string
#tao 1 chuoi chuso
alpha = string.ascii_lowercase

n = int(input())
L = []

for i in range(n):
    s = "-".join(alpha[i:n])
#:: dung de dao nguoc mang, hoac ngat mang
    L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
print('\n'.join(L[:0:-1]+L))

#vong lap in nguoc
for i in range(6, 0, -1):
    print(i)


print(chr(97))