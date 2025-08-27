#include <stdio.h>
void printDetails(char name[], int rollNumber);


int main() {
    char name[50];
    int rollNumber;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  


    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);
    printDetails(name, rollNumber);


    return 0;
}
void printDetails(char name[], int rollNumber) {
    printf("Name       : %s", name);
    printf("Roll Number: %d\n", rollNumber);
}
