#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] = j;
                return arr;
                break;
            }
        }
    }
    free(arr);
    arr = NULL;
    return arr;

}
int kthGrammar(int n, int k) {
    if (n == 1)
    {
        return 0;
    }
    if (k <= (1 << (n - 2)))
    {
        return kthGrammar(n - 1, k);
    }
    else
    {
        return !kthGrammar(n - 1, k - (1 << (n - 2)));
    }
}