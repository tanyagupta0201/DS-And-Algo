# SELECTION SORT
# AUTHOR: SAURABH GUPTA
# DATE MODIFIED: 6 OCT 2021

def selection_sort(arr):
    for i in range(0, len(arr) - 1):
        smallest = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[smallest]:
                smallest = j
        arr[i], arr[smallest] = arr[smallest], arr[i]
    return arr

lst = []
size = int(input("Enter size of the list: "))
elements=[]
elements = (input("Enter the elements: ")).split(" ")
for i in range(0,len(elements)):
    lst.append(int(elements[i]))
 
print(selection_sort(lst))
