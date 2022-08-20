#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	/*calloc(1000)*/
//
//	return 0;
//}
//// 找到所有数组中消失的数字
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    int* array = (int*)calloc(numsSize + 1, sizeof(int));
//    int i = 0;
//    *returnSize = 0;
//    int* arr = (int*)malloc(sizeof(int) * numsSize);
//    for (i = 0; i < numsSize; i++)
//    {
//        array[nums[i]] = -1;
//    }
//    for (i = 1; i <= numsSize; i++)
//    {
//        if (array[i] == 0)
//        {
//            arr[(*returnSize)++] = i;
//        }
//    }
//    return arr;
//}
//// 不用加减乘除做加法
//int Add(int num1, int num2) {
//    // write code here
//    while (num2)
//    {
//        int a = (num1 & num2) << 1;
//        num1 = num1 ^ num2;
//        num2 = a;
//    }
//    return num1;
//}
//int main()
//{
//	int x = -1;
//	unsigned int y = 2;
//	if (x > y)
//	{
//		printf("x is greater");
//	} 
//	else
//	{
//	printf("y is greater");
//	} 
//	return 0;
//}
//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    int i = 0;
//    int key = nums[0];
//    int count_left = 1;
//    int count_right = 0;
//    for (i = 1; i < numsSize; i++)
//    {
//        if (key == nums[i])
//        {
//            count_left++;
//        }
//        else
//        {
//            count_right++;
//        }
//        if (count_left < count_right)
//        {
//            key = nums[i];
//            count_left = count_right;
//            count_right = 0;
//        }
//    }
//
//}

//#include<stdio.h>
//int Perfect_num(int num)
//{
//    int i = 0;
//    int sum = 0;
//    for (i = 1; i < num; i++)
//    {
//        if (num % i == 0)
//        {
//            sum += i;
//        }
//    }
//    if (sum == num)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (Perfect_num(i))
//        {
//            count++;
//        }
//    }
//    printf("%d", count);
//
//    return 0;
//}
//最大连续 1 的个数
//int findMaxConsecutiveOnes(int* nums, int numsSize) {
//    int i = 0;
//    int key = nums[0];
//    int count = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            count++;
//        }
//        else
//        {
//            nums[i] = count;
//            count = 0;
//        }
//    }
//    int Max = count;
//    int max = nums[0];
//    for (i = 1; i < numsSize; i++)
//    {
//        if (nums[i] > max)
//        {
//            max = nums[i];
//        }
//    }
//    return max > Max ? max : Max;
//}
//#include<stdio.h>
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    if (num == 0)
//    {
//        printf("%d", 0);
//    }
//    while (num)
//    {
//        printf("%d", num % 10);
//        num /= 10;
//    }
//
//    return 0;
//}