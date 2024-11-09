
def binary_search(list, key):
  low = 0
  high = len(list) - 1

  while low <= high:
    mid = (low + high) // 2

    if list[mid] == key:
      return mid
    elif list[mid] < key:
      low = mid + 1
    else:
      high = mid - 1

  return -1

###
list = [1, 3, 5, 7, 9]
key = 5
pos = binary_search(list, key)
if pos == -1:
  print("The element is not found.")
else:
  print("The element is found at pos", pos)