#define _CRT_SECURE_NO_WARNINGS 1
//判断是不是字母
#include<stdio.h>
int main()
{
    char ch = 0;
    while ((scanf("%c", &ch)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            printf("%c is an alphabet.\n", ch);
        }
        else
        {
            printf("%c is not an alphabet.\n", ch);
        }
    }
    return 0;
}
//字母大小写转换
#include<stdio.h>
int main() {
    char a;
    while ((a = getchar()) != EOF) {
        if (('a' <= a && a <= 'z'))
        {
            printf("%c\n", a - 32);
        }
        else if ('A' <= a && a <= 'Z')
        {
            printf("%c\n", a + 32);
        }
        getchar();
    }
}


//获得月份天数
#include<stdio.h>
int main()
{
    int year = 0;
    int mon = 0;
    while (scanf("%d %d", &year, &mon) != EOF)
    {
        int arr[13] = { 0 };
        arr[1] = arr[3] = arr[5] = arr[7] = arr[8] = arr[10] = arr[12] = 31;
        arr[4] = arr[6] = arr[9] = arr[11] = 30;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            arr[2] = 29;
        }
        else
        {
            arr[2] = 28;
        }
        printf("%d\n", arr[mon]);
    }

    return 0;
}


//网购
#include<stdio.h>
int main()
{
    double Price = 0;
    int day = 0;
    int mon = 0;
    int volume;
    scanf("%lf %d %d %d", &Price, &day, &mon, &volume);

    if (mon == 12 && day == 12)
    {
        if (Price * 0.8 - 50 < 0)
        {
            printf("0.00");
            return 0;
        }
        if (volume == 1)
        {
            printf("%.2f", Price * 0.8 - 50);
        }
        else
        {
            printf("%.2f", Price * 0.8);
        }

    }
    else if (mon == 11 && day == 11)
    {
        if (Price * 0.7 - 50 < 0)
        {
            printf("0.00");
            return 0;
        }
        if (volume == 1)
        {
            printf("%.2f", Price * 0.7 - 50);
        }
        else
        {
            printf("%.2f", Price * 0.7);
        }
    }

    return 0;
}