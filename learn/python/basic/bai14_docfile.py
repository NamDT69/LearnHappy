from os import read, write
import os
from posix import listdir
with open("python/basic/bai14.txt", 'rb+' ) as f:
    h = f.read()
    print(h)
    # f.write(h)
print(os.getcwd())
print(os.getcwdb())
# os.chdir("/home/dark/Hoc_tap/python/basic")
print(listdir())
