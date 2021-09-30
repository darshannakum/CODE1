
#include <stdio.h>

int main(void)

{
    char Name[30];
    printf("What is your name :-");

    gets(Name);

    printf("Hello, %s\n", Name);
    return 0;
}
