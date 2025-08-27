#include <stdio.h>
void cube(int num);
void square(int num);
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    cube(number);
    square(number);
    return 0;
}
void cube(int num) {
    printf("Cube of %d is %d\n", num, num * num * num);
}
void square(int num) {
    printf("Square of %d is %d\n", num, num * num);
}
