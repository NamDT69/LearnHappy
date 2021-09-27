from abc import ABCMeta, abstractmethod
class Book(object, metaclass=ABCMeta):
    def __init__(self,title,author):
        self.title=title
        self.author=author   #


        #absttract giong nhu ghi de phuong thuc c++
        #Một phương thức abstract là một phương thức có khai báo nhưng không có bất kỳ triển khai nào.
        #  Các Abstract class không thể khởi tạo và nó cần các class con để triển khai cho các phương thức abstract được định nghĩa trong các Abstract class.
    @abstractmethod
    def display(): pass

#Write MyBook class
class MyBook(Book):
    def __init__(self, title , author, price):
        super().__init__(title, author)
        self.price = price
    def display(self):
        print("Title:", self.title)
        print("Author:", self.author)
        print("Price:", self.price)
        

title=input()
author=input()
price=int(input())
new_novel=MyBook(title,author,price)
new_novel.display()