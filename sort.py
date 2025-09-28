import random

n = int(input())

arr = [random.randint(0, 99) for _ in range(n)]
print("Исходный массив:", arr)

for i in range(n):
    for j in range(n - i - 1):
        if arr[j] > arr[j + 1]:
            arr[j], arr[j + 1] = arr[j + 1], arr[j]

print("Отсортированный массив:", arr)
