#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int pivotIndex(int* nums, int numsSize)
//{
//    int i = 0;
//    for (i = 1; i < numsSize - 1; i++)
//    {
//        int j = 0;
//        int sum1 = 0;
//        int sum2 = 0;
//        for (j = 0; j < i; j++)
//        {
//            sum1 += nums[j];
//        }
//        for (j = i + 1; j < numsSize; j++)
//        {
//            sum2 += nums[j];
//        }
//        if (sum1 == sum2)
//        {
//            return i;
//        }
//    }
//        return -1;
//}
//int main()
//{
//    int arr[] = { 1,7,3,6,5,6 };
//    
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int index=pivotIndex(arr, sz);
//    printf("%d", index);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[501] = "123a\0l123b";//存放字符串
//    int count[128] = { 0 };//把字符串对应的ascii码作为下标
//    int sum = 0;//计算不同字符个数
//    
//    for (int i = 0; i < strlen(arr); ++i)
//    {
//        count[arr[i]]++;
//    }
//    //只要不为0 sum就加
//    for (int i = 0; i < 128; ++i)
//    {
//        if (count[i])
//            sum++;
//    }
//    printf("%d %d",strlen(arr), sum);
//}
//#include<stdio.h>
//int main()
//{
//    char str[501] = { 0 };
//
//    scanf("%s", str);
//    int len = strlen(str);
//    int i = 0;
//    for (i = 0; i < len - 1; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < len; j++)
//        {
//            if (str[i] == str[j])
//            {
//                str[j] = -1;
//            }
//        }
//    }
//    int count = 0;
//    for (i = 0; i < len; i++)
//    {
//        if (str[i] != -1)
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//int majorityElement(int* nums, int numsSize) {
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        int count = 0;
//        int j = 0; int t = i;
//        for (j = 0; j < numsSize; j++)
//        {
//            if (nums[i] == nums[j])
//            {
//                count++;
//            }
//        }
//        if (count > (numsSize / 2))
//        {
//            return nums[i];
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 2,2,1,1,1,1,1,1,1,2,2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//  /*  int tmp = majorityElement(arr, sz);*/
//    printf("%d ", EOF);
//}
#include<stdlib.h>
int zi_chu(int num)
{
    int tmp = num;
    while (tmp)
    {
        if ((tmp%10==0)||(num % (tmp % 10))!=0)
        {
            return 0;
        }
        tmp /= 10;
    }
    return 1;
}
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int i = 0;
    int j = 0;
    int* arr = (int*)malloc(sizeof(int) * 10000);
    for (i = left; i <= right; i++)
    {
        if (zi_chu(i))
        {
            arr[j++]=i;
        }
    }
    *returnSize = j;
    return arr;
}
int main()
{
    int count = 0;
    int *arr=selfDividingNumbers(1, 22, &count);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
int mul(int* arr, int numsize)
{
    int i = 0;
    int sum = 1;
    for (i = 0; i < numsize; i++)
    {
        sum *= arr[i];
    }
    return sum;
}
int mul0(int* arr, int numsize, int index)
{
    int i = 0;
    int sum = 1;
    for (i = 0; i < numsize; i++)
    {
        if (i != index)
        {
            sum *= arr[i];
        }
    }
    return sum;
}
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    int i = 0, j = 0;
    int sum = mul(nums, numsSize);
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i])
        {
            arr[i] = sum / nums[i];
        }
        else
        {
            arr[i] = mul0(nums, numsSize, i);
        }
    }
    *returnSize = numsSize;
    return arr;
}