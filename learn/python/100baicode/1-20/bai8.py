#Định nghĩa một lớp gồm có tham số lớp và có cùng tham số instance
class person:
    """this is a function with detail of person"""
    #this is a class
    name = "person"
    def __init__(self, name = None, age = None):
        #this is a instance 
        self.name = name
        self.age = age

tom = person("toom", 23)
jerry = person()

print (person.name)
print(tom.name)
print(jerry.name)
print(tom.age)