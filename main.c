#include <stdio.h>

int main() {
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 75)
        printf("Grade: B\n");
    else if (marks >= 50)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}