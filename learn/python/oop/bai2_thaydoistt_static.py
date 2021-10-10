class tangtoc:
    stt = 1
    t = 1
    def __init__(self, tocdo, trungbinh):
        self.tocdo = tocdo
        self.trungbinh = trungbinh
        #tang t len 1
        self.t = tangtoc.stt
        tangtoc.stt += 1

chooo = tangtoc(60, 90)
print(chooo.t)
choo = tangtoc(60, 90)
print("con dog toc do", chooo.tocdo)


print(chooo.t)
print(choo.t)
# chooo.stt += 1
# print(chooo.stt)
# print(tangtoc.stt)