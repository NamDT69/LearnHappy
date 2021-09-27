

import textwrap


def indau():
    #Hàm này được sử dụng để thêm tiền tố đã cho vào đầu các dòng được chọn của văn bản.
    #  Đối số vị từ có thể được sử dụng để kiểm soát dòng nào được thụt lề.
    s = 'hello\n\n \nworld'
    s1 = textwrap.indent(text=s, prefix='  ')
    
    print (s1)
    print ("\n")
    
    s2 = textwrap.indent(text=s, prefix='+ ', predicate=lambda line: True)
    print (s2)
def asd():
    wrapper = textwrap.TextWrapper(width=50)
  
    s = '''\
        hello
        world
        '''
    #in khoang trong thanh \n
    print(repr(s)) # prints '    hello\n      world\n    '
    #xoa khoang trong 2 dau chuoi giong nhu strip()
    text = textwrap.dedent(s)
    print(repr(text)) # prints 'hello\n  world\n'

    
def wrap(string, max_width):
    # trar ve tung  dong 
    a = textwrap.TextWrapper(width = max_width)
    h = a.fill(text= string)


    #rut gon chuoi
    u = textwrap.shorten(text= string , width= 10)
    hh = a.fill(text= u)
    print(hh)
    return h
    

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
