class Bank:
    def getROI(self):
        return 10
 
class ACB(Bank):
    def getROI(self):
        return 7
   
class BIDV(Bank):
    def getROI(self):
        return 8
 
b1 = Bank()
b2 = ACB()
b3 = BIDV()
print("Lãi suất tiết kiệm:", b1.getROI())
print("Lãi suất tiết kiệm của ACB:", b2.getROI())
print("Lãi suất tiết kiệm của BIDV:", b3.getROI())