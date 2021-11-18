#include <stdio.h>

int main()
{
    char name[10];
    int age;
    printf("Willkommen! Geben Sie Ihren Namen ein: ");
    scanf("%s", name);
    printf("Geben Sie ihr Alter ein: ");
    scanf("%d", &age);
    printf("Name: %s, Alter: %d\n", name, age);
    return 0;
}