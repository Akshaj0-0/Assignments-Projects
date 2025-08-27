#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Value of expression: %d\n", (a + b) * (c - d));
    return 0;
}
