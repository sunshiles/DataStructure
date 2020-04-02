#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    struct student
    {
        int num;
        char name[10];
        int age;
        char sex;
    };
    struct student str_1;
    str_1.num = 10021;
    strcpy(str_1.name, "xiaoli");
    str_1.age = 20;
    str_1.sex = 'n';
    printf("num: %d\nname: %s\nage: %d\nsex: %c\n", str_1.num, str_1.name, str_1.age, str_1.sex);
    return 0;
}