#include "../Head Files/Sqlist.h"
//构造一个空的线性表L
Status InitList(SqList *L)
{

    L->elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
}