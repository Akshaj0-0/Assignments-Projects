#include<stdio.h>
int main()
{
    float percentage;
    int age;
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Age: %d\n", age);
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    printf("Percentage: %.2f\n", percentage);
    return 0;
}
