#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int GetNumberOfK(int* data, int dataLen, int k) {
    // write code here
    int left = 0;
    int right = dataLen - 1;
    int count = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (data[mid] > k)
        {
            right = mid-1;
        }
        else if (data[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            int mid1 = mid;
            int mid2 = mid + 1;
            while (mid1 >= left)
            {
                if (data[mid1] == k)
                {
                    count++;
                }

                mid1--;
            }
            while (mid2 <= right)
            {
                if (data[mid2] == k)
                {
                    count++;
                }
                mid2++;
            }
            break;
        }
    }
    return count;
}
int main()
{
    int arr[] = { 3 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int count = GetNumberOfK(arr, sz, 3);
    printf("%d", count);
}