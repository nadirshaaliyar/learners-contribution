'''
26. Write a program to add two matrices

'''
n = int(input("Enter no. of rows: "))
m = int(input("Enter no. of columns: "))

m1 = []
print("Enter elements for First Matrix: ")
for i in range(n):
    m1.append([])
    for j in range(m):
        num = int(input())
        m1[i].append(num)

m2 = []
print("Enter elements for Second Matrix: ")
for i in range(n):
    m2.append([])
    for j in range(m):
        num = int(input())
        m2[i].append(num)

res = []
for i in range(n):
    res.append([])
    for j in range(m):
        res[i].append(m1[i][j]+m2[i][j])

print("\nAddition Result of Two Given Matrix is:")
for i in range(n):
    for j in range(m):
        print(res[i][j], end=" ")
    print()
