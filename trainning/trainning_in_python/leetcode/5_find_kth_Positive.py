def find_kth_positive(arr, k):
    for i in range(len(arr)):
        if (arr[i] - (i+1)) >= k:
            return (k + i)
    return (len(arr) + k)

print(find_kth_positive([2,3,4,7,11], 5))

