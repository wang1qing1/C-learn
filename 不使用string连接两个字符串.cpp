#include<stdio.h>
#include<string.h>
void fun(char* s1, char* s2);
int main()
{
    char a[20] = "lovedu", b[10] = "qy420";//也可通过输入进行初始化字符串
    fun(a, b);
    puts(a);
}
void fun(char* s1, char* s2)
{
    int len1 = strlen(s1), len2 = strlen(s2);
    for (int i = 0; i < len2; i++)
    {
        *(s1 + i + len1) = *(s2 + i);
    }
}