#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n = 0, m = 0;
//    while ((scanf("%d %d", &n, &m)) == 2)
//    {
//        double arr[1000] = { 0 };
//        arr[0] = n;
//        double sum = n;
//        for (int i = 1; i < m; i++)
//        {
//            arr[i] = sqrt(arr[i - 1]);
//            sum += arr[i];
//        }
//        printf("%.2lf\n", sum);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int* arr = (int*)calloc(10000000, sizeof(int));
//    arr[0] = 1;
//    int sum = 1;
//    for (int i = 1; i < n; i++)
//    {
//        int tmp = sum;
//        for (int j = 0; j < tmp; j++)
//        {
//            arr[j]++;
//            if (arr[j] >= 3)
//            {
//                arr[sum++] = 1;
//            }
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//int* masterMind(char* solution, char* guess, int* returnSize) {
//    int* arr = (int*)calloc(2, sizeof(int));
//    for (int i = 0; i < 4; i++)
//    {
//        if (solution[i] == guess[i])
//        {
//            arr[0]++;
//        }
//        else
//        {
//            for (int j = 0; j < 4; j++)
//            {
//                if (guess[i] == solution[j] && solution[j] != guess[j])
//                {
//                    arr[1]++;
//                    solution[j] = 0;
//                    break;
//                }
//
//            }
//        }
//    }
//    *returnSize = 2;
//    return arr;
//}


//int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
//    // write code here
//    int* arr = (int*)malloc(sizeof(int) * 2);
//    for (int i = 0; i < numbersLen; i++)
//    {
//        if (numbers[i] > target)
//        {
//            continue;
//        }
//        else
//        {
//            for (int j = i + 1; j < numbersLen; j++)
//            {
//                if (numbers[i] + numbers[j] == target)
//                {
//                    arr[0] = i + 1;
//                    arr[1] = j + 1;
//                }
//            }
//        }
//    }
//    *returnSize = 2;
//    return arr;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int* arr = (int*)malloc(sizeof(int) * n);
//    int num = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//        num ^= arr[i];
//    }
//    printf("%d", num);
//    return 0;
//}
//int findPeakElement(int* nums, int numsLen) {
//    int left = 0;
//    int right = numsLen - 1;
//    int mid = 0;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (nums[mid] < nums[mid + 1])
//        {
//            left = mid + 1;
//        }
//        else if (nums[mid - 1] > nums[mid])
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return mid;
//}
#include <stdio.h>
//typedef union
//{
//	int a;
//	struct
//	{
//		short b;
//		short c;
//	};
//}X;
//int main()
//{
//	X x;
//	x.a = 0x20150810;
//	printf("%x,%x\n", x.b, x.c);
//	return 0;
//}
#define MAX 255
int main()
{
	unsigned char A[MAX], i;
	for (i = 0; i <= MAX; i++)
		A[i] = i;
	return 0;
}
#include<stdio.h>
int main()
{
    long n = 0, k = 0;
    scanf("%ld %ld", &n, &k);
    if (k == 0)
    {
        printf("%ld\n", n * n);
        return 0;
    }
    long count = 0;
    for (long y = k + 1; y <= n; y++)
    {
        long ret = n % y - k < 0 ? 0 : n % y - (k - 1);
        count += (y - k) * (n / y) + ret;
    }
    printf("%ld\n", count);
    return 0;
}