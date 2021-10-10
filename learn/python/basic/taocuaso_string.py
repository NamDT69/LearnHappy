import string
def print_rangoli(size):
    # your code goes here
    a = list(string.ascii_lowercase)
    if size == 1:
        print(a[0])
        return 
    b =[]
    for i in range(size):
        h = a[i:size]
        h.reverse()
        # h.extend(a[size])
        h.extend(a[i+1:size])
        s = "-".join(h)   
        b.append(s.center(((size - 1) * 2) * 2 + 1,"-"))
    h = b[1:size]
    h.reverse()
    print("\n".join(h))
    print("\n".join(b))

    # print(b)    # print("-".join(a[0:size]))



if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)


    # x = list(string.ascii_lowercase)
    # print(x)h

    # print(chr(97))
#################################code tham khao
alpha = string.ascii_lowercase

n = int(input())
L = []
for i in range(n):
    s = "-".join(alpha[i:n])
    L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
print('\n'.join(L[:0:-1]+L))

