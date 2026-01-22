// Bubble Sorting

#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    // bubble sort
    for (int i = 0; i < n; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
}
void display(int arr[], int n)
{
    printf("After Using bubble sort: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Before Using Bubble Sort: \n");
   
    display(arr,n);
    bubble_sort(arr, n);
    display(arr,n);
    return 0;
}
