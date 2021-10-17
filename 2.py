'''
Write a program to print below pattern but accept the number of rows from the user.
* * * *
  * * *
    * *
      *
'''
rows =int(input("Enter Number of rows: "))
i = rows
while i >= 1:
    j = rows
    while j > i:
        # display space
        print(' ', end=' ')
        j -= 1
    k = 1
    while k <= i:
        print('*', end=' ')
        k += 1
    print()
    i -= 1