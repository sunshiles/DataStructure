#ifndef SQLIST_H
#define SQLIST_H

#include <stdio.h>
#include "status.h"
#define  LIST_INIT_SIZE   100        //线性表存储空间的初始分配量
#define LISTINCREMENT 10         //线性表存储空间的分配增量 
typedef  struct {
		ElemType  *elem;         //指向存放线性表中数据元素的基地址
		int  length;          //线性表的当前长度   
  		int  listsize;        //当前分配的存储容量                                           
		}SqList;

Status InitList (SqList *L);
int ListLength(SqList  L);
int IsEmpty(SqList  L);
int GetElem(SqList L,int i,ElemType *e);
int LocateELem(SqList  L,ElemType e);
Status ListInsert(SqList *L,int i,ElemType e);
Status ListDelete(SqList *L,int i,ElemType *e);
void ListTraverse(SqList L);

#endif