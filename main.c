#include <stdio.h>

int main(void)
{
    int i;
    int grade[5];

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = ", i);
        scanf("%d", &grade[i]);
    }

    int *p = grade;      
    int sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf("grade[%i] = %d\n", i, *(p + i));  
        sum += *(p + i);
    }

    printf("average : %.2f\n", (double)sum / 5);

    return 0;
}
