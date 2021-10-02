
# Defining the function
def Sum(arr):
 if len(arr)== 1: #base condition
  return arr[0]
 else:
  return arr[0]+ Sum(arr[1:])

arr =[]
# input values to list
arr = [12, 4, 23, 2, 5]

# calculating length of array
N = len(arr)

ans = Sum(arr,N)
print (ans)
