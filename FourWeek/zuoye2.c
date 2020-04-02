#include <stdio.h>
/*
2.	写一函数，实现两个字符串的比较。即自己写一个strcmp函数，函数原型为：
int strcmp(char *p1,char *p2);
设p1指向字符串s1，p2指向s2,。要求当s1=s2时，函数返回值0；若s1!=s2，
返回他们二者第一个不同字符的ASCII码差值。如果s1>s2，则输出正值，如果s1<s2，
则输出负值。  student   studccc   2

*/
int main()
{
    int strcmp(char *p1, char *p2);
    char s1[20];
    char s2[20];
    printf("请输一段字符串：\n");
    scanf("%s", s1);
    printf("请输一段字符串：\n");
    scanf("%s", s2);
    char *p1 = s1;
    char *p2 = s2;
    int result = strcmp(p1, p2);
    printf("%d", result);
    return 0;
}
int strcmp(char *p1, char *p2)
{
    for (; *p1 != '\0' || *p2 != '\0'; p1++, p2++)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
    }
    return 0;
}