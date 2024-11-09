def linear_search(lis,key,index):
    if index == -1:
        return -1
    elif key == lis[index]:
        return index
    else:
        return linear_search(lis,key,index-1)


lis=[10,20,30,98,40,50,55,99]
    # 0  1  2  3  4  5  6  7
key=int(input("Enter the element to be search: "))
le=len(lis)
pos=linear_search(lis,key,le-1) # 'le-1' means last index position of the list

if pos != -1:
    print(f"{key} is found at position {pos}")
else:
    print(f"{key} is not found")