#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
//    // write code here
//    int left = 0;
//    int right = rotateArrayLen - 1;
//    while (right - left > 1)
//    {
//        int mid = (left + right) / 2;
//        if (rotateArray[mid] > rotateArray[left]
//            && rotateArray[mid] > rotateArray[right])
//        {
//            left = mid;
//        }
//        else if (rotateArray[mid] < rotateArray[left]
//            && rotateArray[mid] < rotateArray[right])
//        {
//            right = mid;
//        }
//        else if (rotateArray[mid] == rotateArray[left])
//        {
//            left++;
//        }
//        else if (rotateArray[mid] == rotateArray[right])
//        {
//            right--;
//        }
//        else if (rotateArray[mid] > rotateArray[left]
//            && rotateArray[mid] < rotateArray[right])
//        {
//            return rotateArray[left];
//        }
//    }
//    if (rotateArray[left] < rotateArray[right])
//    {
//        return rotateArray[left];
//    }
//    else
//    {
//        return rotateArray[right];
//    }
//}
//int main()
//{
//   /* int arr[] = { 5,1,2,5,5,5,5,5,5, };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int min=minNumberInRotateArray(arr, sz);*/
//    /*printf("%d", min);*/
//    char ch = 0;
//    do
//    {
//        switch (ch = getchar())
//        {
//        case'a':
//            printf("1 ");
//        case 'b':
//            printf("2 ");
//        default:
//            printf("0 ");
//        }
//
//    } while (ch != '\n');
//
//
//}

//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    int i = 0;
//    static int arr[2] = { 0 };
//    for (i = 0; i < numsSize; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < numsSize; j++)
//        {
//            if (nums[i] == nums[j])
//            {
//                arr[0] = nums[i];
//            }
//        }
//    }
//    int sum = 0;
//    for (i = 1; i <= numsSize; i++)
//    {
//        sum ^= i;
//        sum ^= nums[i - 1];
//    }
//    arr[1] = sum ^ arr[0];
//    *returnSize = 2;
//    return arr;
//}

#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        int big = 0;
        int small = 0;
        int num = 0;
        int other = 0;
        char passward[101] = { 0 };
        scanf("%s", passward);
        int len = strlen(passward);
        int i = 0;
        for (i = 0; i < len; i++)
        {
            if (passward[i] >= 'A' && passward[i] <= 'Z')
            {
                big++;
            }
            else if (passward[i] >= 'a' && passward[i] <= 'z')
            {
                small++;
            }
            else if (passward[i] >= '0' && passward[i] <= '9')
            {
                num++;
            }
            else
            {
                other++;
            }
        }
        if ((other == 0) && (((big > 0) + (small > 0) + (num > 0)) >= 2)
            && (len >= 8) && (passward[0] < '0' || passward[0]>'9'))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;

}