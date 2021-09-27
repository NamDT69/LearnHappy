# Giả sử rằng chúng ta có vài địa chỉ email dạng username@companyname.com, hãy 
# viết một chương trình để in username của địa chỉ email cụ thể. Cả username và 
# companyname chỉ bao gồm chữ cái
n = input()
use = n[:n.index("@")]
company = n[n.index("@") + 1:n.index(".")]
if use.isalpha() and company.isalpha():
    print(use)
else:
    print("email sai")