def selection_sort(array):
    for i in range(len(array)):
        min_index=i
        for j in range(i+1,len(array)):
            if array[j]<array[min_index]:
                min_index=j
        array[i],array[min_index]=array[min_index],array[i]
    return array

#Driven
array=[4,6,2,9,3]
s=selection_sort(array)
print(s)