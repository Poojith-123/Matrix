#include <stdio.h>

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int w = 0; w < 3; w++)
        {
            printf("Element - [%d],[%d]:", i, w);
            scanf("%d", &arr[i][w]);
            printf("\n");
        }
    }

    printf("The matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int w = 0; w < 3; w++)
        {
            printf("%d ", arr[i][w]);
        }
        printf("\n");
    }
}