// Write a program to print above pattern but accept the number of rows from the user.

#include <stdio.h>

int main()
{
    int count;
    printf("Enter your number: ");
    scanf("%d",&count);
    for (int i = count; i >= 0; i--) {
        for (int k = 0; k < count-i; k++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}
