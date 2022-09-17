#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int cmp(const void* e1, const void* e2)
{
    return *((int*)e1) - *((int*)e2);
}
int main() {
    int n = 0;
    scanf("%d", &n);
    int arr[500001] = { 0 };
    int arr2[500001] = { 0 };
    while (n--)
    {
        int num = 0;
        scanf("%d", &num);
        arr[num] = num;
    }
    int count = 0;
    for (int i = 0; i <= 500000; i++)
    {
        if (arr[i] != 0)
        {
            arr2[count++] = arr[i];
        }
    }
    qsort(arr2, count, sizeof(int), cmp);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr2[i]);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = 2 * i - 2; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 0; k < n - i + 1; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}