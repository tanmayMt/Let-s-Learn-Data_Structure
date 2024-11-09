def bubble_sort(array):
    for i in range(len(array)-1):
        for j in range(len(array)-1-i):
            if array[j]>array[j+1]:
                array[j],array[j+1]=array[j+1],array[j]
    return array

#Driven
array=[4,6,2,9,3]
s=bubble_sort(array)
print(s)