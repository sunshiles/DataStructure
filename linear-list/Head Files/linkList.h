#ifndef LINKLIST_H
#define LINKLIST_H
#include "status.h"
typedef struct LNode{
	ElemType data;
	struct LNode *next;
}LNode,*LinkList;

LinkList  CreateList(int a[],int n);
Status ListInsert_L(LinkList L, int i, ElemType  e);
Status ListTraverse(LinkList L);
LinkList  InitList_L();
 #endif