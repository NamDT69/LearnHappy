l = [1,2,3,4,5]
#comprehention
com = [i for i in l if i % 2 ]
print("comprehension: " , com)
#generater
gen = (i for i in l if i % 2)
print(gen)
print(next(gen))
for i in gen:
    print(i)


## viet ham chay cua no 
def gener(l):
    for i in l:
        if i % 2:
            yield i
print(next(gener(l)))
#co hai cach de lay phan tu generater 1 la dung next , 2 la dung vong for
gen2 = (i* 2 for i in l)
print(next(gen2))



