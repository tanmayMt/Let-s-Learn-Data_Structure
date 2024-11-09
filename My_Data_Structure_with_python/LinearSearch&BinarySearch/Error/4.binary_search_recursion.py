def binary_search(arr, low, high, x):

	# Check base case
	while low <= high:

		mid = (high + low) // 2

		# If element is present at the middle itself
		if arr[mid] == x:
			return mid

		# If element is smaller than mid, then it can only
		# be present in left subarray
		elif arr[mid] > x:
			return binary_search(arr, low, mid - 1, x)

		# Else the element can only be present in right subarray
		else:
			return binary_search(arr, mid + 1, high, x)

	return -1

#######
# Test array
list = [1, 3, 5, 7, 9]
key = 5
pos = binary_search(list, 0,len(list)-1,key)
if pos == -1:
  print("The element is not found.")
else:
  print("The element is found at pos", pos)
