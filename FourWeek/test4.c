#include <stdio.h>
int main()
{
    int string_length(char *a);
    char a[10];
    scanf("%s", a);
    char *b = a;
    printf("length:%d\n", string_length(b));
    return 0;
}
int string_length(char *a)
{
    int i;
    for (i = 0; *a != '\0'; a++)
        i++;
    return i;
}