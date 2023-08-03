#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1),j;
    for (j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int n = 0;
    int ch;
    int arr[100];

    printf("\tMenu\n1. Enter Characters\n2. Sort Characters\n3. Exit\n");
    while(1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter character: ");
            char c;
            scanf(" %c", &c);
            arr[n++] = c - 'a';
            break;
        case 2:
            quickSort(arr, 0, n - 1);
            printf("\n\nSorted Sequence is: ");
            int i;
            for (i = 0; i < n; i++)
            {
                printf("%c ", arr[i] + 'a');
			}
            break;
        case 3:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
            break;
        }
    }
    return 0;
}

