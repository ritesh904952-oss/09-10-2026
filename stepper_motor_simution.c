#include <stdio.h>

int main()
{
    int a, b, i;

    printf("Enter total rotation angle:");
    scanf("%d", &a);

    printf("Enter step angle: ");
    scanf("%d", &b);

    for (i = b; i <= a; i += b)
    {
        printf("Motor angle = %d degrees\n", i);
    }

    printf("Rotation completed.");

    return 0;
}