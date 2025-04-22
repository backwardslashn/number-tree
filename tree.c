#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("\n\t\t|--Number tree--|");
    
    printf("\n\t\tEnter a number: ");
    scanf("%d", &i);

    while (i < 11)
    {
        for (int s = 0; s < 11 - i; s++)
        {
            printf("  ");
        }

        for (int j = i; j >= 0; j--)
        {
            printf("%d ", j);
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
        i++;
    }
    return 0;
}
