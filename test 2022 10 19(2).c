#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int f1 = 0;
//    int f2 = 1;
//    int f3 = 0;
//    while (1)
//    {
//        f3 = f1 + f2;
//        if (num < 0)
//        {
//            printf("%d\n", abs(num));
//            break;
//        }
//        else if (num <= f2)
//        {
//            if (num == f2)
//            {
//                printf("0\n");
//                break;
//            }
//            int a = abs(num - f1);
//            int b = abs(num - f2);
//            printf("%d\n", a > b ? b : a);
//            break;
//        }
//        f1 = f2;
//        f2 = f3;
//    }
//    return 0;
//}
void replaceSpace(char* str, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            for (int k = 0; k < 2; k++)
                for (int j = length - 1; j >= i; j--)
                {
                    str[j + 1] = str[j];
                }
            str[i] = '%'; i++;
            str[i] = '2'; i++;
            str[i] = '0';
            length += 2;
        }

    }
}
void replaceSpace1(char* str, int length)
{
    char* str0 = str;
    int count = 0;
    while (*str0)
    {
        if (*str0 == ' ')
        {
            count++;
        }
        str0++;
    }
    char* beg = str + length - 1;
    char* end = str + length - 1 + count * 2;
    while (beg < end)
    {
        if (*beg == ' ')
        {
            *end = '0'; end--;
            *end = '2'; end--;
            *end = '%'; end--;
            beg--;
        }
        else
        {
            *end = *beg;
            beg--;
            end--;
        }
    }
}
