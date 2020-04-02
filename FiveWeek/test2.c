#include <stdio.h>
struct student
{
    int num;
    char name[10];
    int age;
    char sex;
};
struct student str[3] =
    {
        {10002, "xiaoli", 20, 'n'},
        {10002, "xiaoming", 20, 'n'},
        {10002, "xiaolui", 20, 'n'}};
int main()
{
    struct student *p;
    printf("No:      Name           sex        age\n");
    for (p = str; p < str + 3; p++)
        printf("%5d %-20s %2c %4d\n", p->num, p->name, p->sex, p->age);

    return 0;
}