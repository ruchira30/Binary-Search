#include <stdio.h>
#include <stdlib.h>

#define size 5

int Binarysearch(int x, int lower, int upper, int arr[]);

int main()
{
    int x;
    int arr[size] = {25, 30, 35, 40, 45};
    int lower = 0, upper = size - 1;
    printf("Enter element to be searched: ");
    scanf("%d", &x);
    int result = Binarysearch(x, lower, upper, arr);
    if (result == -1)
    {
        printf("Element not found");
        exit(0);
    }
    else
    {
        printf("Element found at index %d", result);
    }
    return 0;
}

int Binarysearch(int x, int lower, int upper, int arr[])
{
    int mid;
    while (lower <= upper)
    {
        mid = (lower + upper) / 2;
        if (x == arr[mid])
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            lower = mid + 1;
        }
        else
        {
            upper = mid - 1;
        }
    }
    return -1;
}

