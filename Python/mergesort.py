
def mergeSort(arr):
  
	if len(arr) > 1:
		mid = len(arr)//2
		Left = arr[:mid]
		Right = arr[mid:]
		mergeSort(Left)
		mergeSort(Right)

		i = j = k = 0

		while i < len(Left) and j < len(Right):
			if Left[i] < Right[j]:
				arr[k] = Left[i]
				i += 1
			else:
				arr[k] = Right[j]
				j += 1
			k += 1

		while i < len(Left):
			arr[k] = Left[i]
			i += 1
			k += 1

		while j < len(Right):
			arr[k] = Right[j]
			j += 1
			k += 1

if __name__ == '__main__':
	arr = [5, 1, 3, 6, 7]
	mergeSort(arr)
  
	print("Sorted array:", end="\n")
	for i in range(len(arr)):
		print(arr[i], end=" ")
