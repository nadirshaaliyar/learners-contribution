'''
21. Write a program to accept a set of numbers and reverse the order

'''
l = list(map(int,input("Enter the numbers: ").split()))
result = []
length = len(l)
for i in range(length-1,-1,-1):
    result.append(l[i])
print(result)
