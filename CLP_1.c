#include <stdio.h>
#include <string.h>

void bitStuffing(int N, int arr[])
{
    int brr[30];

    int i = 0, j = 0;

    while (i < N)
    {
        if (arr[i] == 1)
        {
            if (arr[i + 1] == 0)
            {
                if (arr[i + 2] == 1)
                {
                    brr[j] = arr[i];
                    j++;
                    brr[j] = 0;
                    for (int i = 0; i < N; i++)
                    {
                        brr[j] = arr[i];
                    }
                }
                brr[j] = arr[i];
                i++;
                j++;
            }
            brr[j] = arr[i];
            i++;
            j++;
        }
        else
        {
            brr[j] = arr[i];
            i++;
            j++;
        }
    }
    for (i = 0; i < j; i++)
        printf("BIT STUFFING: %d", brr[i]);
}

int main()
{
    // int arr[] = {1, 1, 1, 0, 1, 1}, N;
    int arr[100], N;
    printf("ENTER SIZE OF ARRAY:  ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // int N = sizeof(arr) / sizeof(int); // size of array

    int f;
    printf("\nYou entered array: \n");
    for (int i = 0; i <= N; i++)
        printf("%d", arr[i]);

    printf("\n1=> 101\n2=> 01110\n3=> 1101\n");
    printf("CHOOSE ANY FLAG\n");
    scanf("%d", &f);

    switch (f)
    {
    case 1:
        bitStuffing(N, arr);
        break;

    default:
        break;
    }

    return 0;
}