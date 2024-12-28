#include<stdio.h>

int main()
{
    int arr[] = {1000,152,700,20};
    int max = 0;
    for (int i = 0; i < 4; i++)
    {
        // printf("%d ",arr[i]);
        if (max > arr[i])
        {
            max = max;
        }
        else
        {
            max = arr[i];
        }
    }
    printf("max number is: %d",max);
    return 0;
}