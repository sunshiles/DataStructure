#include <stdio.h>
/*
        上课练习题：
        输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换
    写3个函数：（1）输入10个数；（2）进行处理；（3）输出10个数。
*/
void main()
{
    void input(int *a, int n);
    void change(int *a, int n);
    void output(int *a, int n);
    int arr[10];
    input(arr, 10);
    change(arr, 10);
    output(arr, 10);
}

void input(int *a, int n)
{
    printf("please input the array:\n");
    int *i;
    for (i = a; i < a + n; i++)
    {
        scanf("%d", i);
    }
}

void output(int *a, int n)
{
    int *i;
    for (i = a; i < a + n; i++)
    {
        printf("%d\t", *i);
    }
}

/*交换数*/
void change(int *a, int n)
{
    int *i, *max, *min;
    int temp;
    min = max = a;
    for (i = a; i < a + n; i++)
    {
        if (*min > *i)
        {
            min = i;
        }
        else if (*max < *i)
        {
            max = i;
        }
    }

    temp = a[0];
    a[0] = *min;
    *min = temp;

    temp = a[n - 1];
    a[n - 1] = *max;
    *max = temp;
}
