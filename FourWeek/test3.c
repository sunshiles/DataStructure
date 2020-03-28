#include <stdio.h>
int main()
{
    void copy_string(char from[], char to[]);
    char from[] = "i am a boy!";
    char to[] = "i am a gile!";
    char *a, *b;
    a = from;
    b = to;
    printf("%s\n", a);
    printf("%s\n", b);
    printf("copy_string:\n");
    copy_string(a, b);
    printf("string a=%s\nstring b=%s\n", a, b);
    return 0;
}
void copy_string(char *a, char *b)
{
    for (; *a != '\0'; a++, b++)
        *b = *a;
    *b = '\0';
}