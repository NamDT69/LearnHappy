if __name__ == '__main__':
    
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    temp = [0,0,0]

    list2 = []
    if sum(temp) != n:
        list2.append(temp.copy())

    while True:
        if temp[2] == z:
            temp[1] += 1
            temp[2] = 0
            if temp[1] > y:
                temp[0] += 1
                temp[1] = 0
            if temp[0] > x:
                break
        else:
            temp[2] += 1
        if sum(temp) != n:
            list2.append(temp.copy())
        
        
    print(list2)