#include <stdio.h>
#include <malloc.h>
#define NULL 0
#define LEN sizeof(struct student)
struct student
{
    long num;
    float score;
    struct student *next;
};
int n;                       //n为全局变量，本文件中各函数均可使用它
struct student *create(void) //定义函数，此函数带回一个指向链表头的指针
{
    struct student *head;
    struct student *p1, *p2;
    n = 0;
    p1 = p2 = (struct student *)malloc(LEN); //开辟一个新单元
    scanf("%ld,%f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct student *)malloc(LEN);
        scanf("%ld,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return (head);
}
void main()
{
    struct student *shu = create();
    printf("%l\n%f", shu->num, shu->score);
}
