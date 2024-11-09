def linear_search(lis,key,le):
    for i in range(0,le):
        if lis[i] == key:
            return i
    return -1


lis=[10,20,30,98,40,50,55,99]
    # 0  1  2  3  4  5  6  7
key=int(input("Enter the element to be search: "))
le=len(lis)
pos=linear_search(lis,key,le)

if pos != -1:
    print(f"{key} is found at position {pos}")
else:
    print(f"{key} is not found")