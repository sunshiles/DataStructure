#include "../Head Files/linkList.h"
LinkList InitList_L()
{
}
Status ListTraverse(LinkList L)
{
}
LinkList CreateList(int a[], int n)
{ //由数组a中的元素建立单链表

    int i;
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL; //先建立一个带头结点的单链表
    for (i = n; i > 0; i--)
    {
        p = (LinkList)malloc(sizeof(LNode)); //生成新结点
        p->data = a[i - 1];                  //数据域赋值
        p->next = L->next;
        L->next = p; //插入到表头
    }
    return (L);
}
Status GetElem_L(LinkList L, int i, ElemType *e)
{ //L为带头结点的单链表的头指针
    //当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR
    j = 1;
    p = L->next;

    while (p && j < i) //p不为空且还未到达i处
    {
        j++;
        p = p->next;
    }

    if (!p || j > i) //第i个元素不存在
        return ERROR;

    *e = p->data;

    return OK;
}

Status ListInsert_L(LinkList L, int i, ElemType e)
{ //在带头结点的单链表L中第i个位置之前插入元素e
    LinkList p;
    int j;
    p = L;
    j = 0;
    while (p && j < i - 1) //寻找第i-1个结点
    {
        p = p->next;
        ++j;
    }

    if (!p || j > i - 1) //i小于1或者大于表长+1
        return ERROR;

    LinkList s = (LinkList)malloc(sizeof(LNode));
    if (!s)
        exit(OVERFLOW);
    s->data = e;
    s->next = p->next;
    p->next = s;

    return OK;
}

Status ListDelete_L(LinkList L, int i, LElemType_L *e)
{ //在带头结点的单链线性表L中，删除第i个元素，并由e返回其值

    p = L;
    j = 1;

    while (p->next && j < i) //寻找第i个结点，并令p指向其前驱
    {
        p = p->next;
        ++j;
    }

    if (!p->next || j > i) //删除位置不合理
        return ERROR;

    q = p->next;
    p->next = q->next;
    *e = q->data;
    free(q);

    return OK;
}
void main()
{
    LElemType_L e;
}