arr = []
arr.extend(input("Введите элементы коллекции через пробел: ").split(' '))
k = input("Введите элемент K: ")
n = int(input("Введите N: "))
count,i=[0,0]

while i < len(arr):
    count += 1
    if count == n:
        arr.insert(i, k)
        count=0
    i+=1

print(arr)