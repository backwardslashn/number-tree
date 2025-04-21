#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    printf("Half a tree");
    
    printf("Enter an number: ");
    scanf("%d", &i);
    
    printf("Enter an number: ");
    scanf("%d", &j);
    
    while (i < 11)
    {
        j = i - 1;
        printf("\n%d ", i);
        i++;

        while (j >= 0)
        {
            printf("%d ", j);
            j--;
        }
    }
    return 0;
}