#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PART 0

#if PART == 0

int main()
{
    short int i;
    char str[81], *p, a;

    do {
        for (p=str;p!=str+80;*p++='\0');
        printf("Введите строку (не более 80 символов): ");
        gets(str);
        if (strlen(str)>=81&&str[80]!='\0') printf("Введено больше 80 символов!\n");
    } while (strlen(str)>=81&&str[80]!='\0');
    
    if (str[0]>=65&&str[0]<=90||str[0]>=97&&str[0]<=122) {

    }
    else {
        printf("Строку нельзя использовать в качестве идентификатора переменной.\n");
    }

    return 0;
}

#elif PART == 1

int main()
{
    printf("Hello world!\n");
    return 0;
}

#endif