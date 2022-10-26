#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int removeElement(int* nums, int numsSize, int val) {

    if (numsSize == 2 && nums[0] == nums[1] && nums[0] == val)
    {
        return 0;
    }

    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            count++;
            for (int j = i; j < numsSize - 1; j++)
            {
                nums[j] = nums[j + 1];
            }
            numsSize--;
            i = 0;
        }
       
    }
    return numsSize;
}
int main()
{
    int arr[] = { 0,1,2,2,3,0,4,2 };
    int num = sizeof(arr) / sizeof(int);
    int count=removeElement(arr, num, 2);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

}