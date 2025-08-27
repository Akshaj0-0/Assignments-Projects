#include<stdio.h>
int main() {
    const float PI = 3.14;
    float area;
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
