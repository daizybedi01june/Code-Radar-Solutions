#include <stdio.h>

int main{
    char s;
    scanf("%c",&s);
    if (s=='A'){
        printf("Uppercase");
    }
    else if (s=='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}