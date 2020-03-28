#include <stdio.h>
/*
1.	有一字符串，包含n个字符。
写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
*/
int main()
{
    void copy(char *a, char *b, int begin);
    char origin[20];
    char result[20];
    char *a = origin;
    char *b = result;
    int begin;
    printf("请输入一段话：\n");
    scanf("%s", origin);
    printf("%s\n", origin);
    printf("请输入从第几个字符开始：\n");
    scanf("%d", &begin);
    copy(a, b, begin);
    printf("%s\n", origin);
    printf("%s\n", result);
    return 0;
}
void copy(char *a, char *b, int begin)
{
    for (; *a != '\0'; a++, b++)
        *b = *(a + begin - 1);
    *b = '\0';
}
