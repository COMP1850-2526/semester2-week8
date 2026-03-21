array = [4, 3, 7, 1, 22, 6, 8]
arrLen = len(array)
print(arrLen)
print(array) 

for i in range(0,arrLen-1):
    mini = i
    for j in range(i+1, arrLen):
        if array[j] < array[mini]:
            mini = j

    tmp = array[i]
    array[i] = array[mini]
    array[mini] = tmp
    print(array)

print(array)
