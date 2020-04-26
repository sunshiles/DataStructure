#include "../Head Files/Sqlist.h"
//构造一个空的线性表L
Status InitList(SqList *L)
{
    (*L).elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    if (!(*L).elem)
        exit(OVERFLOW);             //分配内存失败
    (*L).length = 0;                //初始化顺序表长度为0
    (*L).listsize = LIST_INIT_SIZE; //顺序表初始内存分配量
    return OK;                      //初始化成功
}

void DestroyList(SqList *L)
{
    free((*L).elem); //释放内存后置空指针
    (*L).elem = NULL;
    (*L).length = 0;
    (*L).listsize = 0; //释放线性表占据的所有存储空间
}

void ClearList(SqList *L)
{
    (*L).length = 0; //将线性表的长度置为0
}

int ListLength(SqList L)
{
    return (L.length);
}

int IsEmpty(SqList L)
{
    return (L.length == 0 ? TRUE : FALSE);
}

int GetElem(SqList L, int i, ElemType *e)
{
    if (i < 1 || i > L.length)
        return ERROR;   //判断i值是否合理，若不合理，返回ERROR
    *e = L.elem[i - 1]; //数组中第i-1的单元存储着线性表中第i个数据元素的内容
    return OK;
}

int LocateELem(SqList L, ElemType e)
{
    int i;
    for (i = 0; i < L.length; i++)
        if (L.elem[i] == e)
            return i + 1;
    return 0;
}

Status ListInsert(SqList *L, int i, ElemType e)
{
    int j;
    ElemType *newbase, *q, *p;
    if (i < 1 || i > L->length + 1)
        return ERROR; //参数错误时返回false
    if (L->length >= L->listsize)
    { //当前存储空间已满，增加分配
        newbase = (ElemType *)realloc(L->elem, (L->listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase)
            exit(OVERFLOW);           //存储分配失败
        L->elem = newbase;            //新基址
        L->listsize += LISTINCREMENT; //增加存储容量
    }
    q = &(L->elem[i - 1]);                           //q为插入位置
    for (p = &(L->elem[L->length - 1]); p >= q; --p) //插入位置及之后的元素后移一个位置
        *(p + 1) = *p;
    *q = e;      //插入元素e
    L->length++; //顺序表长度增1
    return OK;   //成功插入返回true
}

Status ListDelete(SqList *L, int i, ElemType *e)
{
    ElemType *q, *p;
    int j;
    if (i < 1 || i > L->length) //参数错误时返回false
        return ERROR;
    p = &(L->elem[i - 1]); //将顺序表逻辑序号转化为物理序号
    *e = *p;
    q = L->elem + L->length - 1; //表尾元素的位置
    for (++p; p <= q; ++p)       //被删除元素之后的元素前移
        *(p - 1) = *p;
    L->length--; //顺序表长度减1
    return OK;   //成功删除
}

void ListTraverse(SqList L)
{
    ElemType *p;
    for (p = L.elem; p <= L.elem + L.length - 1; p++)
    {
        printf("%d\t", *p);
    }
}

void main()
{
    SqList L;
    ElemType *p;
    ElemType e;
    p = &e;
    InitList(&L);
    printf("顺序表的长度为：%d\n", ListLength(L));
    ListInsert(&L, 1, 1);
    ListInsert(&L, 2, 2);
    ListInsert(&L, 3, 3);
    ListInsert(&L, 4, 4);
    ListInsert(&L, 5, 5);
    printf("顺序表的长度为：%d\n", ListLength(L));
    GetElem(L, 3, p);
    printf("第三位置的值为：%d\n", *p);
    printf("遍历L顺序表：        ");
    ListTraverse(L);
    printf("\n删除后遍历L顺序表：");
    ListDelete(&L, 2, p);
    ListTraverse(L);
    printf("\n插入后遍历L顺序表：");
    ListInsert(&L, 2, 2);
    ListTraverse(L);
}
