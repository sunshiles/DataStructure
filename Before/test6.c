#include <stdio.h>
int main()
{
    void inv(int *x, int n);
    int i, a[10] = {3, 4, 5, 8, 3, 65, 30, 90, 53, 1};
    printf("the old array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d  ", a[i]);
    printf("\n");
    inv(a, 10);
    printf("the new array is:\n");
    for (i = 0; i < 10; i++)
        printf("%d  ", a[i]);
    printf("\n");
    return 0;
}

void inv(int *x, int n)
{
    int *p, temp, *i, *j, m = (n - 1) / 2;
    i = x;
    j = x + n - 1;
    p = x + m;
    for (; i <= p; i++, j--)
    {
        temp = *i;
        *i = *j;
        *j = temp;
    }
    return;
}