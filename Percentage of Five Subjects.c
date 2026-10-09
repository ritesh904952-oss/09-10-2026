#include <stdio.h>

int main()
{
    float m1, m2, m3, m4, m5, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &m3);

    printf("Enter marks of subject 4: ");
    scanf("%f", &m4);

    printf("Enter marks of subject 5: ");
    scanf("%f", &m5);

    percentage = (m1 + m2 + m3 + m4 + m5) / 5;

    printf("Percentage = %.2f%%", percentage);

    return 0;
}